#include "holberton.h"

/**
 * _strcpy - Entry point
 * @dest: d
 * @src: dfd
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
int i, n;

for (n = 0; *(src + n) != '\0'; n++)
{
}
if (n != 0)
{
for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}
}
return (dest);
}
