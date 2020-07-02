#include "holberton.h"
/**
 * _strlen_recursion - finds length of a string
 * @s: pointer to a string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int a;

	a = 0;

	if (*s == '\0')
	{
		return (0);
	}

	a = (_strlen_recursion(s + 1));
	return (a + 1);
}
/**
 * palindrome - returns the natural square
 * @f: pointer
 * @l: pointer
 * Return: return string if palindrome
 **/

int palindrome(char *f, char *l)
{
	if (*f != *l)
	{
		return (0);
	}
	else if (f >= l)
	{
		return (1);
	}
	else
	{
		return (palindrome(f + 1, l - 1));
	}
}
/**
 * is_palindrome - 1 if a string is a palindrome and 0
 * @s: pointer to string
 * Return: 1 if palindrome, 0 is not
 **/
int is_palindrome(char *s)
{

	int len = _strlen_recursion(s);
	char *f;
	char *l;

	f  = s;
	l = (s + len - 1);

	return (palindrome(f, l));
}
