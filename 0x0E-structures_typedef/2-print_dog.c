#include "dog.h"
#include <stdlib.h>
/**
 * print_dog- function that prints a struct dog
 * @d: argument of type struct dog
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
