#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: d
 * @n: dd
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[i]);
}
