#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer
 * Return: Var
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int a;

	if (!(*head))
		return (0);
	aux = *head;
	a = aux->n;
	*head = aux->next;
	free(aux);
	return (a);
}
