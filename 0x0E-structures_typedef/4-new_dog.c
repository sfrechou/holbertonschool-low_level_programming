#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
char *_strdup(char *str);

/**
 * new_dog - Entry point
 * @name: j
 * @age: d
 * @owner: d
 *
 * Return: Always 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog2;
char *name2, *owner2;

if (name == NULL || owner == NULL)
{
return (NULL);
}

dog2 = malloc(sizeof(dog_t));
if (dog2 == NULL)
{
return (NULL);
}

name2 = _strdup(name);
if (name2 == NULL)
{
free(dog2);
return (0);
}

owner2 = _strdup(owner);
if (owner2 == NULL)
{
free(dog2);
free(name2);
return (NULL);
}

dog2->name = name2;
dog2->age = age;
dog2->owner = owner2;
return (dog2);
}

/**
 * _strdup - array of chars
 * @str: string
 *
 * Return: always
 */

char *_strdup(char *str)
{
char *s;
int i;
int ii;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
}
s = malloc(i * sizeof(char) + 1);
if (s == NULL)
{
return (NULL);
}
for (ii = 0; ii <= i; ii++)
{
s[ii] = str[ii];
}
return (s);
}
