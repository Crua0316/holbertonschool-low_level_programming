#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: elements
* @size: var
* @cmp: pointer
*
* Return: if size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0, found_number = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for ( ; a < size; a++)
		{
			found_number = cmp(array[a]);
			if (found_number)
				return (a);
		}
		if (found_number == 0)
			return (-1);
	}
	return (-1);
}
