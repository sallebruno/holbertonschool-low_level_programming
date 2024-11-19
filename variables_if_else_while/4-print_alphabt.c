#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * except q and e, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt != 'e' && alphabt != 'q')
			putchar(alphabt);
	}

	putchar('\n');

	return (0);

}
