#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);

/**
 * str_concat - Entry point
 * @s1: d
 * @s2: d
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
char *array;
int s1len, s2len, i, j;

if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
else
{
s1len = _strlen(s1);
s2len = _strlen(s2);
array = (char *)malloc((s1len + s2len) *sizeof(char) + 1);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < s1len; i++)
{
array[i] = s1[i];
}
for (j = 0; j < s2len; j++)
{
array[i + j] = s2[j];
}
return (array);
}
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
