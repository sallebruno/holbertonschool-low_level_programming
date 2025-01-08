#include "main.h"

/**
 * print_must_numbers - Prints numbers from 0-9, without 2 and 4.
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 0; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
