#include "holberton.h"

/**
 *_strcpy - copies string
 *@dest: string value
 *@src: Pointer
 *Return: Dest
 */

char *_strcpy(char *dest, char *src)
{
int a = 0;
int b = 0;

while (src[a] != '\0')
{
a++;
}
for (; b < a; b++)
{
dest[b] = src[b];
}
return(dest);
}
