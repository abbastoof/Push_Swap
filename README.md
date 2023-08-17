# Push Swap

Push Swap is a sorting project from the 42 school curriculum. The goal is to sort data on a stack, with a limited set of instructions, using the smallest possible number of actions.

## Overview

The project consists of two programs:

- `checker`, which receives as an argument the stack of integers that must be sorted. It will then read instructions on its standard input. Once read, checker will execute them and display `OK` if the instructions sort the stack, or `KO` if not.
- `push_swap`, which calculates and displays on the standard output the smallest program using the Push Swap instruction language that sorts the integer arguments received.

## Project Files

- `algorithm.c`: Contains the main sorting algorithm for the project.
- `create_node.c`: Functions for creating a node in the stack.
- `ft_check.c`: Functions to check the validity of the inputs and arguments.
- `ft_init.c`: Initialization functions.
- `helper_functions.c`: Utility/helper functions used throughout the project.
- `movements.c`: Functions corresponding to various operations that can be performed on the stack.
- `pop_push.c`: Functions to pop off and push onto the stack.
- `push_swap.c`: Main driver function.
- `sort.c`: Additional sorting functions.

Headers:
- `push_swap.h`: Contains all the necessary includes and prototypes for the project.

## Build and Run

To compile the project, use the provided `Makefile`:

```bash
make all
```

This will produce the `push_swap` binary.

Example of usage:

```bash
./push_swap 3 2 1 4 5
```

## Dependencies

The project makes use of the `libft` library, which is a custom C library developed during the 42 curriculum.

## Contributing

Please feel free to fork and create pull requests. All contributions are welcome!
