#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t printed;

	printed = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printed += 1;
		h = h->next;
	}
	return (printed);
}
