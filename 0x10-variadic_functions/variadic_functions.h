#ifndef VARIADIC_F
#define VARIADIC_F
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
 * struct str_fts - formats
 * @s_fts: parameter
 * @func: pointer
 */

typedef struct str_fts
{
	char *s_fts;
	void (*func)(va_list list);
} fts;


#endif
