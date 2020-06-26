#include "holberton.h"

/**
 *_strcmp - compare two strings
 *@s1: string compare
 *@s2: string compare
 *Return: Dest
 */

int _strcmp(char *s1, char *s2)
{
int a;

a = 0;
while (s1[a] != '\0' || s2[a] != '\0')
{
if (s1[a] != s2[a])
return (s1[a] - s2[a]);
a++;
}
return (0);
}
