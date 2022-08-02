#include "dog.h"
#include <stdlib>
/**
 * init_dog- function that initialize a variable
 * @d: argument of type struct dog
 * @name: argument of type char
 * @age: argument of type float
 * @owner: argument of type char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
