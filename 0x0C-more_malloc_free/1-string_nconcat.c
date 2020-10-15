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

	unsigned int i, j, lens1, lens2;
	char *concat;

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	concat = (char *)malloc((lens1 + n) * sizeof(char) + 1);

	if (concat == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; i <= lens1; i++)
	{
		concat[i] = s1[i];
	}
	if (n >= lens2)
	{
		for (j = 0; j <= lens2; j++)
		{
			concat[j + i] = s2[j];
		}
	}
	else
	{
		for (j = 0; j <= n; j++)
		{
			concat[j + i] = s2[j];
		}
	}
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
