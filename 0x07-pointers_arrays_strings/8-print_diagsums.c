#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: d
 * @size: d
 *
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int x, y, sum1, sum2;
sum1 = 0;
sum2 = 0;

for (x = 0; x < (size * size); x += (size + 1))
{
sum1 += (a[x]);
}
for (y = (size - 1); y < ((size * size) - (size - 1)); y += (size - 1))
{
sum2 += (a[y]);
}
printf("%d, %d\n", sum1, sum2);
}
