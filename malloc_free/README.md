C Programming Project: Dynamic Memory Allocation

In this project, I learned about the differences between automatic and dynamic memory allocation in C. I also gained hands-on experience with using malloc, free, and valgrind to manage memory efficiently.

Test Files

The project includes a folder of test files provided by Holberton School to verify the correctness of the implemented functions.

Header File

The holberton.h header file contains function prototypes for all the functions implemented in the project.

Function Implementations

The project consists of six functions, each with its own implementation file:

File	Function Prototype
0-create_array.c	char *create_array(unsigned int size, char c);
1-strdup.c	char *_strdup(char *str);
2-str_concat.c	char *str_concat(char *s1, char *s2);
3-alloc_grid.c	int **alloc_grid(int width, int height);
4-free_grid.c	void free_grid(int **grid, int height);
5-argstostr.c	char *argstostr(int ac, char **av);
100-strtow.c	char **strtow(char *str);
Function Descriptions

Each function has a specific task:

create_array: Creates a dynamically allocated array of characters and initializes it with a specified character.
strdup: Creates a duplicate of a given string using dynamic memory allocation.
str_concat: Concatenates two strings and returns the result as a dynamically allocated string.
alloc_grid: Allocates a two-dimensional array of integers and initializes each element to 0.
free_grid: Frees a two-dimensional array previously allocated by alloc_grid.
argstostr: Concatenates all command-line arguments into a single string, separated by newline characters.
strtow: Splits a string into words and returns an array of strings, where each element is a word.
