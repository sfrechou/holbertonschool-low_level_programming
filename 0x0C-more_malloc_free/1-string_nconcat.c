#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);

/**
 * string_nconcat - Entry point
 * @s1: s
 * @s2: s
 * @n: d
 *
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j, a, b;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
	}

	concat = (char *)malloc(i * sizeof(char) + n + 1);

	if (concat == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		concat[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		concat[b + a] = s2[b];
	}
	concat[b + a] = '\0';

	return (concat);
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
