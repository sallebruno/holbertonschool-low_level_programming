#include "main.h"
#include "length.c"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @src: Source string to concatenate
 * @dest: Destiny string to be concatenated
 * Return: Returns a String
 */
char *_strcat(char *dest, char *src)
{
    int lengthdest;
    int i;

    if (src == NULL)
    {
        return (dest);
    }

    lengthdest = length(dest);

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[lengthdest + i] = src[i];
    }
    dest[lengthdest + i] = '\0';

    return (dest);
}
