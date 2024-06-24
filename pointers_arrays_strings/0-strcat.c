#include "main.h"
#include "length.c"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @src: Source string to concatenate
 * @dest: Destiny string to be concatenated
 * Return: Returns a String
 */
char *_strcat(char *dest, char *src)
{
    if (src == NULL)
    {
        return (dest);
    }

    int lengthdest = length(dest) + 1;
    int i = 0;

    while (src[i] != '\0')
    {
        dest[lengthdest + i - 1] = src[i];
        i++;
    }
    dest[lengthdest + i - 1] = '\0';

    return (dest);
}
