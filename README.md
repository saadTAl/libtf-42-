*This project has been created as part of the 42 curriculum by satalbi.*

# Libft

## Description

**Libft** is the first project of the 42 curriculum. The goal is to build, from scratch, a personal C library (`libft.a`) that re-implements a selection of standard C library functions and adds a set of extra utility functions. The library is then reused in every later 42 project, so it has to be correct, norm-compliant and free of memory leaks.

The project teaches:

- how the standard C functions actually work (edge cases, return values, undefined behaviour);
- pointer arithmetic and raw memory handling;
- dynamic memory allocation and clean error handling;
- function pointers (`ft_strmapi`, `ft_lstmap`, ...);
- building a static library with `ar` and a `Makefile`.

The library is compiled with `cc -Wall -Wextra -Werror` and depends only on `<stdlib.h>` and `<unistd.h>` (`malloc`, `free`, `write`).

## Instructions

### Compilation

From the root of the repository:

```bash
make          # builds libft.a
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean + all
```

All 43 source files (mandatory and list functions) are built into `libft.a` by a plain `make`.

### Using the library in your own project

1. Include the header in your source file:

   ```c
   #include "libft.h"
   ```

2. Compile and link against the archive:

   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
   # or equivalently
   cc -Wall -Wextra -Werror main.c libft.a -o my_program
   ```

### Quick example

```c
#include "libft.h"

int main(void)
{
    char **words = ft_split("hello 42 school", ' ');
    int   i = 0;

    while (words[i])
    {
        ft_putendl_fd(words[i], 1);
        free(words[i]);
        i++;
    }
    free(words);
    return (0);
}
```

### Repository layout

```
.
├── Makefile
├── libft.h        # prototypes and the t_list structure
├── ft_*.c         # one function per file
└── README.md
```

## Library description

### Libc re-implementations

| Category | Functions |
|---|---|
| Character tests | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Conversion | `ft_atoi` |

These behave like their libc counterparts (`strlcpy` and `strlcat` follow the BSD semantics).

### Additional functions

| Function | Description |
|---|---|
| `ft_substr(s, start, len)` | Allocates and returns a substring of `s` starting at index `start`, at most `len` characters long. |
| `ft_strjoin(s1, s2)` | Allocates and returns the concatenation of `s1` and `s2`. |
| `ft_strtrim(s1, set)` | Returns a copy of `s1` with all characters found in `set` removed from both ends. |
| `ft_split(s, c)` | Splits `s` using the delimiter `c` and returns a `NULL`-terminated array of newly allocated strings. |
| `ft_itoa(n)` | Converts an integer to its allocated string representation (handles `INT_MIN`). |
| `ft_strmapi(s, f)` | Applies `f(index, char)` to each character and returns the new string of results. |
| `ft_striteri(s, f)` | Applies `f(index, char *)` to each character of `s` in place. |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a character, string, string followed by a newline, or integer to the given file descriptor. |

### Linked list functions

The list functions work on this structure, declared in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew(content)` | Creates a new node holding `content`. |
| `ft_lstadd_front(lst, new)` | Inserts `new` at the beginning of the list. |
| `ft_lstadd_back(lst, new)` | Appends `new` at the end of the list. |
| `ft_lstsize(lst)` | Returns the number of nodes. |
| `ft_lstlast(lst)` | Returns the last node. |
| `ft_lstdelone(lst, del)` | Frees one node's content with `del`, then the node itself. |
| `ft_lstclear(lst, del)` | Deletes and frees every node, then sets the list pointer to `NULL`. |
| `ft_lstiter(lst, f)` | Applies `f` to the content of every node. |
| `ft_lstmap(lst, f, del)` | Builds a new list by applying `f` to each node's content; on allocation failure the partial list is cleared using `del`. |

### Technical choices

- **One function per file**, named after the function, with all prototypes gathered in `libft.h`.
- **Static helpers** (for example the word counter in `ft_split`) are kept `static` so they do not leak into the library's public namespace.
- **Allocation failures** are handled: functions that allocate return `NULL` and free anything already allocated.
- **Makefile**: object files depend on `libft.h`, so a header change triggers a rebuild; the archive is created with `ar rcs`; the rules are `all`, `clean`, `fclean`, `re`.

## Resources

### References

- [GNU C Library manual](https://www.gnu.org/software/libc/manual/)
- Linux man pages (`man 3 strlen`, `man 3 memmove`, `man 3 strlcpy`, `man 2 write`, ...)
- Kernighan & Ritchie, *The C Programming Language*
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [`ar` (GNU binutils) documentation](https://sourceware.org/binutils/docs/binutils/ar.html)
- [The 42 Norm](https://github.com/42School/norminette)
- [Valgrind documentation](https://valgrind.org/docs/manual/) for leak checking

### Use of AI

AI (Claude) was used only for documentation: it helped draft and structure this `README.md` from the project's source files and the 42 README requirements. It was not used to write the library's C code.


