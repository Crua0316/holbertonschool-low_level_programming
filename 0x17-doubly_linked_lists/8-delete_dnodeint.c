#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a int node in the DDL.
 * @head: double pointer to the DLL.
 * @index: index to return the node
 * Return: 1 if it success 0 if not.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *aux = NULL;
	unsigned int i = 0;

	if (!head)
		return (-1);
	if (index >= dlistint_len(*head))
		return (-1);
	if (index == 0)
	{
		aux = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	if (index == dlistint_len(*head) - 1)
	{
		while (i++ < index - 1)
			tmp = tmp->next;
		aux = tmp->next;
		tmp->next = NULL;
		free(aux);
		return (1);
	}
	while (i++ < index - 1)
		tmp = tmp->next;
	aux = tmp->next;
	tmp->next = tmp->next->next;
	tmp->next->prev = tmp;
	free(aux);
	return (1);
}
/**
 * dlistint_len - function to count the elements in the Doubly Linked List.
 * @h: head pointer to the DLL.
 * Return: amount of elements in the DLL.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	for (; h; counter++)
		h = h->next;
	return (counter);
}
