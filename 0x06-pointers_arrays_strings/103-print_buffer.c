#include "holberton.h"
#include <stdio.h>
void ponerespacios(int j);
/**
 * print_buffer - Entry point
 * @b: d
 * @size: d
 * Return: Always 0 (Success)
 */
void print_buffer(char *b, int size)
{
if (size > 0)
{
int cont = 0, i, i2, tope, j, k;
int p = 0;
tope = 10;
j = 10;
for (i = 0; i < size; i += 10)
{
printf("%08x: ", cont);
if (size - cont < 10)
{
j = size - cont;
}
for (k = 0; k < j; k = k + 2)
{
printf("%02x", b[i + k]);
if (j % 2 == 0)
{
printf("%02x", b[i + k + 1]);
printf(" ");
}
}
ponerespacios(j);
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
/**
 * ponerespacios - saf
 * @j:sdfsd
 */
void ponerespacios(int j)
{
int t;
for (t = 0; t <= j + 3 && j != 10; t++)
{
printf(" ");
}
}
