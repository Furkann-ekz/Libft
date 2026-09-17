*This project has been created as part of the 42 curriculum by fekiz.*

## Description

This project involves coding a C library that includes numerous general-purpose functions. It serves to help understand how highly useful standard libc functions work by implementing them from scratch. The resulting library will be a valuable tool for future C school assignments in the curriculum.

## Instructions

* To compile the library, simply run `make` at the root of the repository.
* The `Makefile` will compile the source files using `cc` with the `-Wall`, `-Wextra`, and `-Werror` flags.
* The output will be a static library named `libft.a`, created using the `ar` command.
* The `Makefile` includes the standard rules: `all`, `clean`, `fclean`, and `re`.



## Library Contents

The library requires a detailed set of implementations divided into three main parts:

* **Part 1 - Libc functions:** Reimplementations of standard C library functions (such as `ft_strlen`, `ft_memcpy`, `ft_strchr`, `ft_atoi`, `ft_calloc`, and `ft_strdup`) maintaining the same prototypes and behaviors as their man page descriptions.
* **Part 2 - Additional functions:** Custom utility functions that either do not exist in standard libc or exist in a different form, including string manipulation (`ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`) and file descriptor outputs (`ft_putchar_fd`, `ft_putstr_fd`).
* **Part 3 - Linked list:** A collection of functions designed to manipulate linked lists using a custom `t_list` structure, including node creation (`ft_lstnew`), adding nodes (`ft_lstadd_front`, `ft_lstadd_back`), list traversal (`ft_lstiter`), and list mapping (`ft_lstmap`).



## Resources

* **Documentation:** Standard Linux manual pages (man pages) were used as the primary reference to understand the exact prototypes and behaviors of libc functions.
* **Peer Learning:** Collaborative learning, asking questions, and discussing function logic with friends and peers.
* **Online Research:** Exploring Stack Overflow, searching the internet, and watching educational videos to grasp underlying concepts.
* **Code Review:** Reviewing open-source repositories on GitHub to study different implementation approaches and logic.
* **Reverse Engineering:** Using a trial-and-error approach by compiling and testing the standard libc functions to observe their exact outputs and replicate their behaviors.
* **AI Usage:** Artificial Intelligence was used exclusively to generate, format, structure, and translate this `README.md` file. No AI tools were utilized for writing the C code, implementing the functions, or configuring the Makefile.