#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Nested Array
 * @size: Size of the matrix
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	printf("%i, ", sum1);
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%i\n", sum2);
}
