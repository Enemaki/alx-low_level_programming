#include "lists.h"
/**
 * add_dnodeint- function that adds a new node
 * at the beginning of a dlistint_t list
 * @head: doubly linked lists
 * @n: integer number
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
