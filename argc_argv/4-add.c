#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the add of positive numbers.
 *
 * @argc: The number of arguments to the program.
 * @argv: An array of pointers to the arguments.
 * Return: if numbers received contain non-digit characters, 1.
 *												Otherwise, 0.
 */

int main(int argc, char *argv[])
{
	int num;
	int digit;
	int result = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[num]);
	}

	printf("%d\n", result);

	return (0);
}
