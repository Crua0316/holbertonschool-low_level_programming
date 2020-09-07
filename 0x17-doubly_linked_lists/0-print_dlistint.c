#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list.
* @h: Pointer to dlistint_t
*
* Return: The number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (count);
}
