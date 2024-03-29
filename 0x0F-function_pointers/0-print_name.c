#include "function_pointers.h"
/**
 * print_name- function that prints a name
 * @name: argument of type char
 * @f: function pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
	}
	f(name);
}
