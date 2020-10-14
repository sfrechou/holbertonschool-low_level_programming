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
