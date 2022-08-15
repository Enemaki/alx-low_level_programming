#include "lists.h"
/**
 * print_listint- function that prints all the elements
 * of a listint_t list
 * @h: pointer to node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int printed = 0;

	if (h == NULL)
	{
		return (0);
	}
	temp = h;
	while (temp != NULL)
	{
		printf("%d", temp->n);
		printed += 1;
		temp = temp->next;
	}
	return (printed);
}
