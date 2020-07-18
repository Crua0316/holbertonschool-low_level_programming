#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: Variable
 *
 * Return: Result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int result = 0;
	unsigned int a;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (a = 0; a < n; a++)
	{
		result += va_arg(numbers, int);
	}
	va_end(numbers);
	return (result);
}
