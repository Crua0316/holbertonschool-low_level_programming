#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer
 * @n: Var const int
 * Return: Node to end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *end;

	end = *head;

	if (head == NULL)
		return (0);

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (0);

	aux->n = n;
	aux->next = NULL;

	if (*head == NULL)
	{
		*head = aux;
		return (aux);
	}
	else
	{
		while (end->next != NULL)
			end = end->next;
			end->next = aux;
	}
	return (aux);
}
