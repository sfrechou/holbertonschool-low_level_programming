#include "holberton.h"

/**
 * _strncpy - Entry point
 * @dest: d
 * @src: dfd
 * @n: ss
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
j = 0;

while (dest[j] != '\0')
{
j++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
