#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: The number of sign to print.
 * Return: 1 if number >0,
 *		0 if number = 0,
 *		-1 if number <0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	{
		_putchar('0');
		return (0);
	}
	{
		_putchar('-');
		return (-1);
	}
}
