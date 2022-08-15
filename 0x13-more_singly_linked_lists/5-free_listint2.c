#include "lists.h"
/**
 * free_listint2- function that frees a listint_t list
 * @head: pointer to node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((current = *head) != NULL)
	{
		free(current);
		head = head->next;
	}
	head = NULL;
}
