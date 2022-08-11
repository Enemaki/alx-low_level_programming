#include "lists.h"
/**
 * _strlen- functions returns string len
 * @str: string argument
 * Return: string length
 */
int _strlen(const char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end- function that adds a new node
 * at the beginning of a list_t list.
 * @head: pointer to poiter
 * @str: string to be added
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	ptr = *head;
	if (ptr == NULL)
	{
		*head = new;
		return (new);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;

	return (new);
}
