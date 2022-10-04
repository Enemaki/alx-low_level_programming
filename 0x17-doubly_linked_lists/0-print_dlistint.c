#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint *temp;
	size_t printed;

	temp = h;
	while (temp != NULL)
	{
		printf("%d", temp->data);
		printed += 1;
		temp = temp->next;
	}
	return (printed);
}
