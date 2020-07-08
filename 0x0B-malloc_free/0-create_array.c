#include "holberton.h"
#include <stdlib.h>

/**
*create_array - Create array of chars
*@size: new array
*@c: char in array
*Return: New array
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int a = 0;

if (size == 0)
return (0);
str = malloc(size * (sizeof(char)));
if (str == '\0')
return (0);
for ( ; a < size; a++)
str[a] = c;
str[a] = '\0';
return (str);
}
