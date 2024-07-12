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
    int length = 0;

   if (str == NULL)
          return (NULL);

   for (int i = 0; str[i]; i++)
           length++;
   copy = malloc(sizeof(char) * (length + 1));

   if(copy == NULL)
           return (NULL);
   for (int i = 0; i < length; i++)
           copy[i] = str[i];
   copy[length] = '\0';

   return (copy);
}
