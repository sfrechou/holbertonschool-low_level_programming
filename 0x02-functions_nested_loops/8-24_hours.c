#include "holberton.h"

/**
 * jack_bauer - writes the character c to stdout
 *
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
int a, b, c, d, tope;

tope = 57;
for (a = 48; a <= 50; a++)
{
for (b = 48; b <= tope; b++)
{
for (c = 48; c <= 53; c++)
{
for (d = 48; d <= 57; d++)
{
if (a == 50)
{
tope = 51;
}
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
}
}
}
}
}
