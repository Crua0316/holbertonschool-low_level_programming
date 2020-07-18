#include "function_pointers.h"

/**
* array_iterator - parameter on each element of an array
* @array: elemnts
* @size: Var
* @action: pointer
*
* Return: 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;

if (array && action)
{
for (a = 0; a < size; a++)
{
(*action)(array[a]);
}
}
}