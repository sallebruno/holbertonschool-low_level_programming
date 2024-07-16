#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * Return: If concatenation fails - NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int a, b = 0, c = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] || s2[a]; a++)
		c++;

	str_concat = malloc(sizeof(char) * c);

	if (str_concat == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		str_concat[b++] = s1[a];

	for (a = 0; s2[a]; a++)
		str_concat[b++] = s2[a];

	return (str_concat);
}
