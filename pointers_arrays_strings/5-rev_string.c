#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: String to reverse.
 */

void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	char tmp;

	while (s[l])
	{
		l++;
	}

	for (i = 0; i < ll / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}
