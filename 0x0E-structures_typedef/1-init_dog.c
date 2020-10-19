#include "dog.h"

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

	d->name = name;
	d->age = age;
	d->owner = owner;
}
