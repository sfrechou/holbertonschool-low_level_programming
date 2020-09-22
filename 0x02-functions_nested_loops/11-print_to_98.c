#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
int a, b;

if (n > 98)
{
a = n;
for (a = n; a >= 98; a--)
{
printf("%d", a);
if (a != 98)
{
printf(", ");
}
}
printf("\n");
}
else if (n < 98)
{
b = n;
for (b = n; b <= 98; b++)
{
printf("%d", b);
if (b != 98)
{
printf(", ");
}
}
printf("\n");
}
else
{
printf("%d\n", n);
}
}
