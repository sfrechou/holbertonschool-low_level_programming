#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - Entry point
 * @b: d
 * @size: d
 *
 * Return: Always 0 (Success)
 */
void print_buffer(char *b, int size)
{
if (size > 0)
{
int cont = 0, i, i2, tope;
int p = 0;
tope = 10;
for (i = 0; i < size; i += 10)
{
printf("%08x: ", cont);
printf("%02x%02x ", b[i], b[i + 1]);
printf("%02x%02x ", b[i + 2], b[i + 3]);
printf("%02x%02x ", b[i + 4], b[i + 5]);
printf("%02x%02x ", b[i + 6], b[i + 7]);
printf("%02x%02x ", b[i + 8], b[i + 9]);
for (i2 = cont; i2 < cont + 10; i2 += 10)
{
if (size - cont < 10)
{
tope = size - cont;
}
for (p = 0; p < tope; p++)
{
if (b[i + p] < size)
{
if (b[i + p] >= 0 && b[i + p] <= 31)
{
putchar(46);
}
else
putchar(b[i + p]);
}
}
}
cont = cont + 10;
if (i % 10 == 0)
{
putchar('\n');
}
}
}
else
printf("\n");
}
