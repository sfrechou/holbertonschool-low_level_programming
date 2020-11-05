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
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if ((n & 1) == 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
