#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer
 *
 * Return: Node to end
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
