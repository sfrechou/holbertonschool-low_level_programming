#include "holberton.h"

/**
 * _strchr - Entry point
 * @s: d
 * @c: d
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{

while (*s != c)
{
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (0);
}
}
