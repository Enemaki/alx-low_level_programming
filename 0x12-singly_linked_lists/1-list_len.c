#include "lists.h"
/**
 * list_len- function that returns the number of elements in a linked
 * a list_t list
 * @h: pointer to node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *current_node = h;
	int printed = 0;

	while (current_node != NULL)
	{
		printed += 1;
		current_node = current_node->next;
	}
	return (printed);
}
