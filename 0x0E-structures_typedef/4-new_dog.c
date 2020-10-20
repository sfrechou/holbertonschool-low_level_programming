#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
char *_strdup(char *str);
int _strlen(char *s);

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
 * _strdup - Entry point
 * @str: d
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
char *array;
int x, i;

if (str == NULL)
{
return (NULL);
}
else
{
x = _strlen(str);
array = (char *)malloc(x *sizeof(char) + 1);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < x; i++)
{
array[i] = str[i];
}
}
return (array);
}

/**
 * _strlen - Entry point
 * @s: d
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int length;
length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
