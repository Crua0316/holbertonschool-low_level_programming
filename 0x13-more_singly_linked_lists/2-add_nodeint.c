#include "lists.h"

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
