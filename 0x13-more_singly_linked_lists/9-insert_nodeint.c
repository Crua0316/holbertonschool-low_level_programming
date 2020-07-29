#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer
 * @idx: index of the list where the new node should be added
 * @n: Var
 * Return:  the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux;
	unsigned int a = 1;

	aux = *head;
	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	if (idx == 0)
	{
		new = add_nodeint(head, n);
		return (new);
	}
	while (aux)
	{
		if (a == idx)
		{
			new->n = n, new->next = aux->next;
			aux->next = new;
			break;
		}
		if (aux->next)
		aux = aux->next, a++;
		else
			return (0);
	}
	return (new);
}
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer
 * @n: Var const int
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aux;

	if (head == NULL)
		return (0);

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (0);
	aux->n = n;
	aux->next = *head;
	*head = aux;
	return (aux);
}
