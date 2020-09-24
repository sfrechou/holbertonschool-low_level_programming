#include "holberton.h"

/**
 * print_diagonal - Entry point
 * @n: d
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
int a, i;

if (n > 0)
{
for (a = 1; a <= n; a++)
{
for (i = 1; i < a; i++)
{
_putchar (32);
}
_putchar (92);
_putchar ('\n');
}
}
else
{
_putchar ('\n');
}
}
