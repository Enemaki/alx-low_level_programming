#include "lists.h"
/**
 * print_list- function that prints all the elements of
 * a list_t list
 * @h: pointer to node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current_node = h;
	int printed = 0;

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		{
			printf("[0] (nil)\n");
			printed += 1;
			current_node = current_node->next;
		}
		else
		{
			printf("[%u] %s\n", current_node->len, current_node->str);
			printed += 1;
			current_node = current_node->next;
		}
	}
	return (printed);
}
