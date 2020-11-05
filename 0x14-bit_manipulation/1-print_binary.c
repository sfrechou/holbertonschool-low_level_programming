#include "holberton.h"

/**
 * print_binary - function that prints a list
 * @n: pointer to list to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = n;

	if (n > 1)
	{
		m = n & 1;
		print_binary(n >> 1);
	}
	_putchar(m + '0');
}
