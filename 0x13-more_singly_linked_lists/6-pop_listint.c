#include "lists.h"
/**
 * pop_listint- function that deletes the head
 * node of a listint_t linked list
 * @head: pointer to pointer to node
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, *val;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	val = *head;
	*head = temp;
	free(temp)
	return (val->n);
}
