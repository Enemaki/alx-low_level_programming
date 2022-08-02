#include "dog.h"
/**
 * init_dog- function that initialize a variable
 * @d: argument of type struct dog
 * @name: argument of type char
 * @age: argument of type float
 * @owner: argument of type char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog user;

	d = &user;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
