#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * @c: Character to check.
 * Return: 1 if correct, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
