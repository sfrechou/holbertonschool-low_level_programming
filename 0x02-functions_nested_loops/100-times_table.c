#include "holberton.h"

/**
 * print_times_table - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
int a, b, c, d, e, f;
if (n > 0 && n <= 15)
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
d = c / 100;
e = (c / 10) % 10;
f = c % 10;
if (b != 0)
{
if (d != 0)
{
_putchar ('0' + d);
}
else
{
_putchar (' ');
}
if (d != 0 || e != 0)
{
_putchar ('0' + e);
}
else
{
_putchar (' ');
}
}
_putchar ('0' + f);
if (b != n)
{
_putchar (',');
_putchar (' ');
}
}
_putchar ('\n');
}
}
}
