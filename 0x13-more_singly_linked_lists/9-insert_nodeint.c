#include "lists.h"
/**
 * insert_nodeint_at_index- function that inserts a new
 * node at a given position
 * @head: pointer to pointer to node
 * @idx: index where node is to be inserted
 * @n: data of new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *ptr;
	unsigned int i;

	temp = *head;
	if (head == NULL)
	{
		return (NULL):
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	ptr = temp->next;
	temp->next = new;
	new->next = ptr;
	return (new);
}
