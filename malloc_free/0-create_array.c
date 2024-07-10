#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize
 * Return: If size == 0 or the function fails - NULL.
 * 	   Otherwise -string
 */

char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int index;  /* Add a semicolon here */

    if (size == 0)
        return (NULL);

    array = malloc(sizeof(char) * size);

    if (array == NULL)
        return(NULL);

    index = 0;  /* Initialize index to 0 */
    while (index < size)
    {
        array[index] = c;
        index++;
    }
    return (array);
}
