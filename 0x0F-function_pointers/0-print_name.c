#include "function_pointers.h"

/**
* print_name - function that prints a name.
* @name: Variable of name
* @f: pointer
*
* Return: 0
*/

void print_name(char *name, void (*f)(char *))
{
	if ((*f) == '\0')
		return;
	(*f)(name);
}
