#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Entry point
 * @d: j
 * @name: d
 * @age: h
 * @owner: d
 *
 *
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
