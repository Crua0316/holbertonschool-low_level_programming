#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer
 * Return: Null
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (!head)
		return;
	while (*head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	head = NULL;
}
