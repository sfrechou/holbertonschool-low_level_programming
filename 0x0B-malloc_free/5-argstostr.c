#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Entry point
 * @ac: s
 * @av: s
 *
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, cont;
	char *quote;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < ac; k++)
	{
		for (j = 0; av[k][j] != '\0'; j++)
		{
			cont++;
		}
	}
	cont += ac;
	quote = (char *)malloc(cont * sizeof(char) + 1);
	if (quote == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (k = 0; k < ac; k++)
	{
		for (j = 0; av[k][j] != '\0'; j++, i++)
		{
			quote[i] = av[k][j];
		}
		quote[i++] = '\n';
	}
	return (quote);
}
