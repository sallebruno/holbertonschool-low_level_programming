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
    int bruno, destructivo = 0;

   if (str == NULL)
	  return (NULL);

   for (bruno = 0; str[bruno]; bruno++)
	   destructivo++;
   copy = malloc(sizeof(char) * (destructivo + 1));

   if(copy == NULL)
	   return (NULL);
   for (bruno = 0; str[bruno]; bruno++)
	   copy[destructivo] = '\0';
   
   return (copy);
}
