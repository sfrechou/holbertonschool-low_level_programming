#include "holberton.h"

/**
 * _memcpy - Entry point
 * @dest: d
 * @src: d
 * @n: d
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
i = 0;
while (n > 0)
{
dest[i] = src[i];
i++;
n--;
}
return (dest);
}
