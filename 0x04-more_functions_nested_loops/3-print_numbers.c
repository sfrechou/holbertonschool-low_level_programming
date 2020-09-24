#include "holberton.h"

/**
 * print_numbers - checks if c is lowercase
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
int a;

for (a = 0; a <= 9; a++)
{
_putchar (a + '0');
}
putchar ('\n');
}
