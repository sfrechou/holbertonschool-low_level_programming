#include "holberton.h"

/**
 * set_string - Entry point
 * @s: d
 *
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putchar (*s);
s++;
_puts_recursion(s);
}
else
{
_putchar('\n');
}
}
