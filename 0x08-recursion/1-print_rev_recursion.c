#include "holberton.h"

/**
 * _print_rev_recursion - Entry point
 * @s: d
 *
 *
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
