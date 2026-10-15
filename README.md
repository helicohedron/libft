# Libft

*This project has been created as part of the 42 curriculum by jrosette.*

## Description

The **Libft** project is a library of C functions that can be reused for future projects. It covers fundamental concepts in C programming, including pointers, dynamic memory allocation, strings, memory manipulation, and linked lists.

The library contains **43 functions** in total:

* **23** reimplementations of functions from the standard C library.
* **11** additional utility functions that are either not present in `libc` or exist in a different form.
* **9** functions for creating and manipulating linked lists.

### Character Functions

| Function     | Description                                                      |
| ------------ | ---------------------------------------------------------------- |
| `ft_isalpha` | Checks if a character is alphabetic, either upper or lower case. |
| `ft_isdigit` | Checks if a character is a decimal digit, from 0 to 9.           |
| `ft_isalnum` | Checks if a character is either alphabetic or a decimal digit.   |
| `ft_isascii` | Checks if a character is an ASCII character.                     |
| `ft_isprint` | Checks if a character is printable.                              |
| `ft_toupper` | Converts a lowercase letter to uppercase.                        |
| `ft_tolower` | Converts an uppercase letter to lowercase.                       |

### String Functions

| Function      | Description                                                                                                   |
| ------------- | ------------------------------------------------------------------------------------------------------------- |
| `ft_strlen`   | Returns the length of a string.                                                                               |
| `ft_strlcpy`  | Copies a string into a destination buffer of a specified size.                                                |
| `ft_strlcat`  | Appends a string to a destination buffer of a specified size.                                                 |
| `ft_strchr`   | Locates the first occurrence of a character in a string. The character is interpreted as an `unsigned char`.  |
| `ft_strrchr`  | Locates the last occurrence of a character in a string.                                                       |
| `ft_strncmp`  | Compares two strings up to a specified number of characters.                                                  |
| `ft_strnstr`  | Locates a substring within another string, searching up to a specified length.                                |
| `ft_strdup`   | Creates a duplicate of a string using dynamic memory allocation.                                              |
| `ft_substr`   | Creates a substring from a string, starting at a specified index and with a specified maximum length.         |
| `ft_strjoin`  | Concatenates two strings into a newly allocated string.                                                       |
| `ft_strtrim`  | Removes characters from the beginning and end of a string if they are present in a specified set.             |
| `ft_split`    | Splits a string into an array of strings using a specified delimiter.                                         |
| `ft_strmapi`  | Applies a function to each character of a string and returns a newly allocated string containing the results. |
| `ft_striteri` | Applies a function to each character of a string, passing its index and a pointer to the character.           |

### Memory Functions

| Function     | Description                                                                                       |
| ------------ | ------------------------------------------------------------------------------------------------- |
| `ft_memset`  | Fills a memory area with a specified byte value.                                                  |
| `ft_bzero`   | Sets a specified number of bytes in a memory area to zero.                                        |
| `ft_memcpy`  | Copies a specified number of bytes from one memory area to another.                               |
| `ft_memmove` | Copies a specified number of bytes between memory areas while safely handling overlapping memory. |
| `ft_memchr`  | Searches a memory area for a specified byte and does not stop at a null byte.                     |
| `ft_memcmp`  | Compares a specified number of bytes in two memory areas.                                         |
| `ft_calloc`  | Allocates memory for an array and initializes all allocated bytes to zero.                        |

### Integer Conversion Functions

| Function  | Description                                                                     |
| --------- | ------------------------------------------------------------------------------- |
| `ft_atoi` | Converts the initial portion of a string representing an integer into an `int`. |
| `ft_itoa` | Converts an integer into a newly allocated string representation.               |

### File Descriptor Functions

| Function        | Description                                                           |
| --------------- | --------------------------------------------------------------------- |
| `ft_putchar_fd` | Writes a character to a specified file descriptor.                    |
| `ft_putstr_fd`  | Writes a string to a specified file descriptor.                       |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor. |
| `ft_putnbr_fd`  | Writes an integer to a specified file descriptor.                     |

### Linked Lists

The linked-list functions operate on the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function          | Description                                                                   |
| ----------------- | ----------------------------------------------------------------------------- |
| `ft_lstnew`       | Creates a new list node containing the specified content.                     |
| `ft_lstadd_front` | Adds a node to the beginning of a linked list.                                |
| `ft_lstsize`      | Counts the number of nodes in a linked list.                                  |
| `ft_lstlast`      | Returns the last node of a linked list.                                       |
| `ft_lstadd_back`  | Adds a node to the end of a linked list.                                      |
| `ft_lstdelone`    | Deletes a single node and frees its content using a specified function.       |
| `ft_lstclear`     | Deletes and frees all nodes in a linked list.                                 |
| `ft_lstiter`      | Applies a function to the content of every node in a linked list.             |
| `ft_lstmap`       | Creates a new linked list by applying a function to the content of each node. |

## Instructions

### Compilation

The library can be compiled using the provided `Makefile`.

```bash
make
```

This creates the static library:

```text
libft.a
```

The following Makefile rules are available:

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Recompile the library from scratch
```

### Using Libft

To use the library in another C project, include the header file:

```c
#include "libft.h"
```

## Resources

* **Makefile Tutorial**, *The Builder*
  https://www.youtube.com/watch?v=U1I5UY_vWXI

* **Memory Layout of C Programs**, *GeeksforGeeks*
  https://www.geeksforgeeks.org/c/memory-layout-of-c-program/

* **Header Files in C**, *GeeksforGeeks* 
  https://www.geeksforgeeks.org/c/header-files-in-c-cpp-and-its-uses/



## Notes

This project was developed as part of the 42 curriculum and was used to strengthen my understanding of:

* C syntax and standard library functions
* Pointers and pointer arithmetic
* Dynamic memory allocation with `malloc` and `free`
* Memory manipulation
* Strings and character arrays
* Function pointers and callbacks
* File descriptors
* Structures and linked lists
* Makefiles and static libraries
* Memory management and error handling