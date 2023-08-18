```markdown
# 🔄 Push Swap

Push Swap is a sorting project from the ![42 school](https://img.shields.io/badge/42-School-blue) curriculum. The objective is to organize data on a stack, using a restrained set of instructions, and aiming to achieve this in the least number of actions possible.

## 📋 Overview

The project is divided into two main programs:

- `checker` 📥: Takes the stack of integers that need to be sorted as an argument. It then waits for instructions via its standard input. Upon reading, `checker` processes them and displays `OK` if the stack becomes sorted or `KO` otherwise.
  
- `push_swap` 📤: Computes and presents on the standard output the briefest set of instructions in the Push Swap instruction language that can sort the given integer arguments.

## 📁 Project Files

- `algorithm.c` 🧮: Contains the primary sorting algorithm.
- `create_node.c` 🛠: Functions to instantiate a node in the stack.
- `ft_check.c` ✔: Validity check functions for inputs and arguments.
- `ft_init.c` 🚀: Initialization functions.
- `helper_functions.c` 🧩: Utility/helper functions utilized across the project.
- `movements.c` ➡️: Functions corresponding to various stack operations.
- `pop_push.c` ⬆️⬇️: Operations to pop and push onto the stack.
- `push_swap.c` 🔄: The main driver function.
- `sort.c` 🧲: Additional sorting functions.

Headers 📄:
- `push_swap.h`: Centralizes the needed includes and function prototypes.

## 🛠 Build and Run

To compile, use the included `Makefile`:

```bash
make all
```

This will yield the `push_swap` binary.

Usage example:

```bash
./push_swap 3 2 1 4 5
```

## 🔗 Dependencies

The project leverages the `libft` library 📚, a personalized C library conceived during the 42 curriculum.

## 🤝 Contributing

Feel free to fork, innovate, and submit pull requests. Every contribution is cherished! 💖
