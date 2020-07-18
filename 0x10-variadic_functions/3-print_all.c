#include "variadic_functions.h"
#include "type_of_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 *
 * Return: list
 */

void print_all(const char * const format, ...)
{
	fts formats[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_str},
		{NULL, NULL},
	};

	int a, b;
	va_list list;
	char *s = "";

	a = 0;
	va_start(list, format);

	while (format && format[a])
	{
		b = 0;
		while (formats[b].s_fts != NULL)
		{
			if (formats[b].s_fts[0] == format[a])
			{
				printf("%s", s);
				formats[b].func(list);
				s = ", ";
			}
			b++;
		}
		a++;
	}
	va_end(list);
	printf("\n");
}
