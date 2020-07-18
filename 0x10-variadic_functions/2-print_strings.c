#include "variadic_functions.h"

/**
 * print_strings -  prints strings
 * @separator: string
 * @n: variable
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int a;
	char *s;

	va_start(str, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(str, char *);
		printf("%s", s != '\0' ? s : "(nil)");
		if (a != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
