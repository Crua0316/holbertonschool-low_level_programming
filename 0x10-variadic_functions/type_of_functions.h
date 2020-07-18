#ifndef TYPE_F
#define TYPE_F

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

#endif
