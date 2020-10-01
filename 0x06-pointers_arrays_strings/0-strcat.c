#include "holberton.h"

/**
 * _strcat - Entry point
 * @dest: d
 * @src: dfd
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
int d, s;

for (d = 0; dest[d] != '\0'; d++)
{
}

for (s = 0; src[s] != '\0'; s++)
{
dest[d + s] = src[s];
}
return (dest);
}
