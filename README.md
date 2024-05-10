[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE) 
[![CodeFactor](https://www.codefactor.io/repository/github/visrm/c-assignments/badge)](https://www.codefactor.io/repository/github/visrm/c-assignments)

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

# Table of Contents

- [**Introduction to C**](#introduction-to-c)

- [**Sections of C Program**](#sections-of-the-c-program)

    - [main() function](#main-function)

- [**Basic C Glossary**](#basic-c-glossary)

  - [Header files](#header-files)

- [**List of Programs**](#list-of-programs)

  - [Part-1](#part-1)

  - [Part-2](#part-2)

- [**Contributing guide**](#contributing-guide)

## Introduction to C

- C is a **procedural programming language**.
- It was initially developed by **Dennis Ritchie** in the year 1972.
- It was mainly developed as a system programming language to write an operating system.
- The main features of the C language include :
  - **low-level memory access**
  - **simple set of keywords**
  - **clean style**<br>
    these features make C language suitable for system programmings like an operating system or compiler development.
- Many later languages have borrowed syntax/features directly or indirectly from the C language
  - Like syntax of **Java**, **PHP**, **JavaScript**, and many other languages are mainly based on the C language.
  - **C++** is nearly a superset of C language (Few programs may compile in C, but not in C++).

> For more information on C , [click here](https://www.geeksforgeeks.org/c-language-set-1-introduction/)

## Sections of the C Program

There are 6 basic sections responsible for the proper execution of a program. Sections are mentioned below:

1. Documentation
2. Preprocessor Section
3. Definition
4. Global Declaration
5. `Main()` Function
6. Sub Programs

### `main()` Function

main is a predefined keyword or function in C. It is the first function of every C program that is responsible for starting the execution and termination of the program.
It is a special function that always starts executing code from the `main` having `int` or `void` as return data type.

For more information of the following, [click here](https://www.geeksforgeeks.org/structure-of-c-program/)

example program:

```c
// Documentation 
/**                      
 * file: sum.c 

 * author: xyz 

 * description: program to find sum. 

 **/

  
// Link 
#include <stdio.h>       

  
// Definition 
#define X 20  

  
// Global Declaration 

int sum(int y);    

  
// Main() Function 

int main(void)        
{ 

  int y = 55; 

  printf("Sum: %d", sum(y)); 

  return 0; 
} 

  
// Subprogram 

int sum(int y)  
{ 

  return y + X; 
}
```

## Basic C Glossary

These are glossary for some of the keywords, functions and terms used in this  programs :

### Header Files

In C language, header files contain the set of predefined standard library functions. The “#include” preprocessing directive is used to include the header files with “.h” extension in the program.
Here is the table that displays some of the header files used in the programs:
| Header files | Description | Example of contained functions |
| ------------ | ----------- | ------------------------------ |
| stdio.h | Input/Ouput functions | `printf();`, `scanf();` |
| conio.h | Console Input/Output functions | `getch();`, `clrscr();` |
| stdlib.h | General utility functions | `malloc();`, `realloc();` |
| math.h | Mathematics fuctions | `sqrt();`, `pow();` |
| string.h | String functions | `strcpy();`, `strcmp();`|


### Preprocessor

In C programming, the preprocessor is a behind-the-scenes program that acts on your code before it reaches the actual compiler. It's like a prep cook getting everything ready for the main chef (the compiler)

### Compiler 

In C programming, the compiler plays a critical role in converting your human-readable code into instructions the computer can understand.

### Comments 

Comments in C are essential elements that enhance code readability and maintainability. They are annotations or explanations added to the source code, but are ignored by the compiler during compilation.

### Pointers

Pointers are special variables that store memory addresses of other variables. Imagine your variables live in different houses on a street. A pointer holds the address (like a house number) of another variable on that street.


## List of Programs

The list of Programs are divided into two parts .

- [Part-1 consisting of basic C programming](#part-1).
- [Part-2 consisting of data structures of C programming](#part-2).

### PART-1

| Program                                                                                                   | Status |
| --------------------------------------------------------------------------------------------------------- | ------ |
|                                                                                                           |        |
| <a href="Part-1/Leap-year.c">Check for leap years.</a>                                                    | ✅     |
| <a href="Part-1/Quadratic_root.c">Find roots of quadratic equation.</a>                                   | ✅     |
| <a href="Part-1/Sum-and-reverse_num.c">Find sum of digits and reverse of number.</a>                      | ✅     |
| <a href="Part-1/Half-pramid.c">Display pyramid using "\*".</a>                                            | ❌     |
| <a href="Part-1/Factorial.c">Find factorial of a number.</a>                                              | ✅     |
| <a href="Part-1/Primes.c">To find first **n** prime numbers.</a>                                          | ✅     |
| <a href="Part-1/Lcm_gcd.c">Find LCM & HCF of two numbers.</a>                                             | ✅     |
| <a href="Part-1/count_pos-neg-zero.c">To display count of -ve's, +ve's, zeroes in a set of N numbers.</a> | ✅     |
| <a href="Part-1/N-Armstrong.c">To print Armstrong number within range.</a>                                | ✅️     |
| <a href="Part-1/Decimal-to-binary.c">To covert decimal number to new base.</a>                            | ✅     |
| <a href="Part-1/Std_deviation.c">To calculate standard deviation of N numbers.</a>                        | ✅️     |
| <a href="Part-1/Binary-to-decimal.c">Find decimal equivalent of number(base other than 10).</a>           | ✅️     |
| <a href="Part-1/Merge_arr.c">To merge two arrays.</a>                                                     | ✅     |
| <a href="Part-1/Sort_num.c">To sort n numbers.</a>                                                        | ✅     |
| <a href="Part-1/Fibonacci.c">To find Nth fibonacci number.</a>                                            | ✅     |
| <a href="Part-1/Trace-sq_matrix.c">To find the trace of a square matrix.</a>                              | ❌     |
| <a href="Part-1/Count-words.c">Find the number of words in a given sentence.</a>                          | ❌     |
| <a href="Part-1/Count-vowels.c">Find the number of vowels in strings.</a>                                 | ❌     |

> For further informations on the programs <a href="PART-1.md">click here</a>

### PART-2

| Program                                                                                                     | Status |
| ----------------------------------------------------------------------------------------------------------- | ------ |
|                                                                                                             |        |
| <a href="Part-2/Sort_string.c">Sort a given list of strings.</a>                                            | ❌     |
| <a href="Part-2/Merge_sorted-arr.c">Merge two sorted arrays into one sorted array.</a>                      | ❌     |
| <a href="Part-2/Linear-search.c">Search an element in one dimensional array using linear search.</a>        | ❌     |
| <a href="Part-2/Binary-search.c">Search an element in one dimensional array using binary search.</a>        | ❌     |
| <a href="Part-2/Sparse_matrix.c">Implement sparse matrix.</a>                                               | ✅     |
| <a href="Part-2/Linked_list-display.c">Create a singly linked list of N nodes and display it.</a>           | ✅     |
| <a href="Part-2/Linked_list-del-node.c">Delete a given node (by position) from a singly linked list.</a>    | ❌     |
| <a href="Part-2/Linked_list-search.c">Create a singly linked list and search an element from that list.</a> | ❌     |
| <a href="Part-2/Polynomial.c">Implement polynomial using array.</a>                                         | ❌     |
| <a href="Part-2/Stack_op.c">Implement stack operations (push & pop) using array.</a>                        | ❌     |
| <a href="Part-2/Queue_op.c">Implement queue operations (insertion & deletion) using array.</a>              | ❌     |
| <a href="Part-2/Merge-sort.c">Implement merge sort using array.</a>                                         | ❌     |
| <a href="Part-2/Bubble-sort.c">Implement bubble sort using array. </a>                                      | ❌     |
| <a href="Part-2/Selection-sort.c">Implement selection sort using array.</a>                                 | ❌     |
| <a href="Part-2/Insertion-sort.c">Implement insertion sort using array.</a>                                 | ❌     |

> For further informations on the programs <a href="PART-2.md">click here</a>

## Contributing guide

🎉🎉 we welcome all contributors to contribute to this repository. For more information on terms of contributions, <a href="CONTRIBUTING.md">click here</a>.&emsp;  &emsp;  &emsp;  &emsp;  &emsp;  [`↑`](#table-of-contents)
