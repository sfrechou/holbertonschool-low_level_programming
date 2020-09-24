#include "holberton.h"

/**
 * print_triangle - Entry point
 * @size: d
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
int line, column;

if (size != 0 && size > 0)
{
for (line = 1; line <= size; line++)
{
for (column = 1; column <= size; column++)
{
if (column <= (size - line))
{
_putchar (' ');
}
else
{
_putchar ('#');
}
}
_putchar ('\n');
}
}
if (size <= 0)
{
_putchar ('\n');
}
}
