#include <stdio.h>

/**
 * main - Prints a lowercase alphabet,
 * followed by an uppercase alphabet,
 * followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
