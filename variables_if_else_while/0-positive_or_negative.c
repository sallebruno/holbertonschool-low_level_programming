#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number and checks
 * if it is positive, negative, or zero, then prints
 * the result to the console.
 *
 * Return: Always 0
 */

int main(void) 
{
	int n;

	srand(time(0)); 

	n = rand() - RAND_MAX / 2; 

	if (n > 0) 

	{
		printf("%d is positive\n", n);

	} else if (n == 0) 
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}

	return 0;
}
