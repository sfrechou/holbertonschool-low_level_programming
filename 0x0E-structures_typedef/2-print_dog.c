#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Entry point
 * @d: j
 *
 *
 * Return: Always 0 (Success)
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("(nil)\n");
		}
		if (d->age < 0)
		{
			printf("(nil)\n");
		}
		if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}

