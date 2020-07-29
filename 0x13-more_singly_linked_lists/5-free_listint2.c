#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer
 *
 * Return: Node to end
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if(!head)
		return;
	while (*head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	head = NULL;
}
