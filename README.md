# LIBFT

This repository contains the implementation of the `libft.a` library, developed as part of the **Libft** project at 42 School. `Libft` is a custom standard library written in C, with the goal of reinforcing understanding of memory manipulation, strings, linked lists, and other fundamental C functions.

## 📁 Project Structure

- `libft.a` – Compiled library containing all implemented functions.
- `*.c` – Source files with function implementations.
- `libft.h` – Header file with function declarations.

## 🛠️ Implemented Functions

Some of the reimplemented functions include:

- Memory manipulation: `memset`, `memcpy`, `memmove`, `bzero`, etc.
- String handling: `strlen`, `strchr`, `strrchr`, `strlcpy`, `strlcat`, `strncmp`, etc.
- Conversions: `atoi`, `itoa`
- Character checks: `isalpha`, `isdigit`, `isalnum`, `isprint`, `toupper`, `tolower`
- Memory allocation: `calloc`, `strdup`
- Bonus functions: linked list operations (`t_list`)

## ⚙️ Compilation

To compile the library:
make

To clean object files:
make clean

To remove all object files and the compiled library:
make fclean

To clean and recompile everything:
make re

🧪 How to Use
Include the library header in your project:

#include "libft.h"

To compile your program with the library:
gcc -L. -lft main.c


👤 Author
@wpicancio


