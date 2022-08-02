#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog- struct declaration
 * @name: variable 1 type char
 * @age: variable 2 type integer
 * @owner: variable 3 type char
 * Return: nothing
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
