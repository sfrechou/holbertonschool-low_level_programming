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
int i;
i = 0;

while (n > 0)
{
s[i] = b;
n--;
i++;
}
return (s);
}
