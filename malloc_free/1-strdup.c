#include "main.h"
#include <stdlib.h>

/**
 * -strdup - returns a pointer to a newly allocated space in memory
 *  @str: copied string
 *  return: 0
*/

char *_strdup(char *str)
{
    char *copy;
    int b,d = 0 ;

   if (str == NULL)
          return (NULL);

   for (b = 0; str[b]; b++)
	   d++;

   copy = malloc(sizeof(char) * (d + 1));

   if(copy == NULL)
           return (NULL);

   for (b = 0; str[b]; b++)
	   copy[b] = str[b];

   copy[d] = '\0';

   return (copy);
}
