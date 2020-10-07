#include "holberton.h"

/**
 * _strlen_recursion - Entry point
 * @s: d
 *
 *
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
int i;
i = 0;

if (*s != '\0')
{
s++;
i++;
i = i + (_strlen_recursion(s));
}
return (i);
}
