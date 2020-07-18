#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: variable
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a;

	va_start(numbers, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numbers, int));
		if (a < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
