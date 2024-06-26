#include "main.h"
/**
 * *_memset - Fills memory with a constant byte
 * @s: String
 * @b: Byte
 * @n: Number of times
 * Return: String
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
