#include "holberton.h"

/**
 * times_table - writes the character c to stdout
 * : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int a, b, c, d, e;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
d = c / 10;
e = c % 10;

if (b == 9 && d != 0)
{
_putchar (' ');
_putchar (d + '0');
_putchar (e + '0');
}
else if (b == 0)
{
_putchar (d + '0');
_putchar (',');
}
else if (d == 0)
{
_putchar (' ');
_putchar (' ');
_putchar (e + '0');
if (b != 9 && d == 0)
{
_putchar (',');
}
}
else
{
_putchar (' ');
_putchar (d + '0');
_putchar (e + '0');
_putchar (',');
}
}
_putchar ('\n');
}
}
