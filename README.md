 # 0x10. C - Variadic functions

# ALX 

## 0x10. C - Variadic functions

C - Variadic functions 📁

TASKS 📃

0. Beauty is variable, ugliness is constant
Write a function that returns the sum of all its parameters.
Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0

1. To be is to be the value of a variable
Write a function that prints numbers, followed by a new line.
Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between numbers and n is the number of integers passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
Print a new line at the end of your function

2. One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line.
Prototype: void print_strings(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between the strings and n is the number of strings passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
If one of the string is NULL, print (nil) instead
Print a new line at the end of your function

3. To be is a to be the value of a variable
Write a function that prints anything.
Prototype: void print_all(const char * const format, ...);
where format is a list of types of arguments passed to the function
c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead
any other char should be ignored
see example
You are not allowed to use for, goto, ternary operator, else, do ... while
You can use a maximum of
2 while loops
2 if
You can declare a maximum of 9 variables
You are allowed to use printf
Print a new line at the end of your function





# 0x0F. C - Variadic functions
##ALX 
### 0x10-variadic_functions
---
## Description

This project in the Low Level Programming series is about:
* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier

## Files
---
File|Task
---|---
variadic_functions.h | header file with function prototypes
0-sum_them_all.c | function that returns the sum of all its parameters
1-print_numbers.c | function that prints numbers, followed by a new line
2-print_strings.c | function that prints strings, followed by a new line
3-print_all.c | function that prints anything where format is a list of types of arguments passed to the function
100-hello_coding.asm | 64-bit program in assembly that prints Hello, Coding, followed by a new line

## Directories
---
Directory Name | Description
---|---
codingschool-low_level_programming/0x0F-variadic_functions/ | Main folder for all C files and a header file

## How to compile
gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

## More Info
All files is formatted Betty style and checked using betty-style.pl and betty-doc.pl

## Author
KARIM 



