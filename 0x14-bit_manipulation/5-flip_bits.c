#include "holberton.h"

/**
 * flip_bits - function that prints a list
 * @n: number 1
 * @m: number 2
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, x;

	x = n ^ m;

	while (x > 0)
	{
		if ((x & 1) == 1)
		{
			bits++;
		}
		x >>= 1;
	}
	return (bits);
}
