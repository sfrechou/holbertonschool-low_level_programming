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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
