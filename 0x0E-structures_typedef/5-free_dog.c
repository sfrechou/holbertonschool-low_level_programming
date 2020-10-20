#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Entry point
 * @d: j
 *
 *
 * Return: Always 0 (Success)
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}

