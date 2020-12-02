#include "lists.h"
/**
 * insert_dnodeint_at_index - add a int node int the index of the DDL.
 * @h: double pointer to the DLL.
 * @idx: index to add the node
 * @n: data in the node
 * Return: pointer with the new node DLL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp, *new;

	if (!h)
		return (NULL);
	if (idx > dlistint_len(*h))
		return (NULL);
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	tmp = *h;
	while (i++ < idx - 1)
		tmp = tmp->next;
	tmp->next->prev = new;
	new->next = tmp->next;
	tmp->next = new;
	new->n = n;
	new->prev = tmp;
	return (new);
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
