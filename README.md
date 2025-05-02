# Libft

## Project Overview

**Libft** is the very first project in the 42 curriculum, where students are asked to create their own standard C library. The goal is to reimplement commonly used functions from the C standard library and then build upon them with additional utility functions.

This project teaches:

- Low-level memory handling with `malloc`, `free`, and pointers
- String manipulation and parsing
- Character classification and ASCII operations
- Modular library creation (`.a` archives)
- Linked list manipulation (bonus)

---

## How It Works

You write your own versions of standard C functions such as:

- Character checks: `ft_isalpha`, `ft_isdigit`, ...
- String functions: `ft_strlen`, `ft_strdup`, `ft_strchr`, ...
- Memory functions: `ft_memset`, `ft_memcpy`, `ft_calloc`, ...
- Conversion: `ft_atoi`, `ft_itoa`, ...
- Output: `ft_putchar_fd`, `ft_putstr_fd`, ...
- String building: `ft_split`, `ft_strjoin`, `ft_strtrim`, ...

In the **bonus part**, you implement a singly linked list structure (`t_list`) with utilities like `ft_lstnew`, `ft_lstadd_back`, and `ft_lstmap`.

---

## Installation & Compilation

```bash
git clone https://github.com/ahmeterenyasar/libft.git
cd libft
make
```

> This will compile all `.c` files into object files and generate a static archive called `libft.a`.

---

## Usage

To use your `libft` in another project:

```bash
#include "libft.h"

int main(void)
{
    char *text = "hello world";
    ft_putstr_fd(text, 1); // writes to stdout
    return (0);
}
```

> Link with your library using `-L.` and `-lft`:

`gcc main.c -L. -lft`

---

## License

This project is for academic and personal learning purposes only.
