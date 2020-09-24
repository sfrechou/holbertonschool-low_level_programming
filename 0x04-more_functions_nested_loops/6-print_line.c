#include "holberton.h"

/**
 * print_line - Entry point
 * @n: d
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
int a;
if (n != 0 && n > 0)
{
for (a = 0; a < n; a++)
{
_putchar (95);
}
_putchar ('\n');
}
else
{
_putchar ('\n');
}
}
