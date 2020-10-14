#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);

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
x = _strlen(str);

if (x == 0)
{
return (NULL);
}
else
{
array = (char *)malloc(x *(sizeof(char)));
for (i = 0; str[i] != '\0'; i++)
{
array[i] = str[i];
}
return (array);
}
return (NULL);
}

#include "holberton.h"

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
