#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Entry point
 * @nmemb: s
 * @size: s
 *
 *
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *ptr;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	for (i = 0; i < (numb * size); i++)
	{
		ptr[i] = 0;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
