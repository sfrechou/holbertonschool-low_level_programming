#include "holberton.h"

/**
 * _memset - Entry point
 * @s: d
 * @b: df
 * @n: df
 *
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n > 0)
{
*s = b;
s++;
n--;
}
return (s);
}
