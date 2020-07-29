#include "lists.h"

/**
 * get_nodeint_at_index - turns the nth node of a listint_t
 * @head: pointer
 * @index: Index of the node
 * Return:  the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (!head)
		return (NULL);
	for (a = 0; a != index; a++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
