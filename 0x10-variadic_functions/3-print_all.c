#include "variadic_functions.h"
#include "type_of_functions.h"

/**
 * f_char - char format
 * @all: value va_list
 *
 * Return: void
 */
void f_char(va_list all)
{
	printf("%c", va_arg(all, int));
}

/**
 * f_int - int format
 * @all: value va_list
 *
 * Return: void
 */
void f_int(va_list all)
{
	printf("%d", va_arg(all, int));
}

/**
 * f_float - float format
 * @all: value va_list
 *
 * Return: void
 */
void f_float(va_list all)
{
	printf("%f", va_arg(all, double));
}

/**
 * f_str - print in string format
 * @all: value va_list
 *
 * Return: void
 */
void f_str(va_list all)
{
	char *tmp;

	tmp = va_arg(all, char *);
	if (tmp == NULL)
		tmp = "(nil)";
	printf("%s", tmp);
}

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
	printf("\n");
	va_end(list);
}
