#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: the initial point
 * @str: content the new node
 *
 * Return: New node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;
	}
	else
	{
		return (NULL);
	}
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - length of the string
 * @s: adress
 *
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int a = 0;

	while (s[a])
		a++;
	return (a);
}
