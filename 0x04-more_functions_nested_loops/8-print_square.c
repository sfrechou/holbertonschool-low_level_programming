#include "holberton.h"

/**
 * print_square - Entry point
 * @size: d
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
int a, b;
a = size;
b = size;
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar (35);
}
_putchar ('\n');
}
if (size == 0 || size < 0)
{
_putchar ('\n');
}
}
