#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

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
	int age;
	char *owner;
};

#endif
