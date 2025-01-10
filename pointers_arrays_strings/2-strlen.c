#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @str: the string to measure.
 * Return: @str length.
 */

int _strlen(char *s)
{
        size_t length = 0;

        while (*s++)
                length++;


        return (length);
}
