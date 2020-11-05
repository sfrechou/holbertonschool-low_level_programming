#include "holberton.h"

/**
 * binary_to_uint - function that prints a list
 * @b: pointer to list to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int binary_to_uint(const char *b)
{
	int potencia = 1, i = 0, j, k = 0;
	unsigned int c = 0, num1 = 0, num2 = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			i++;
		else
			return (0);
	}
	for (j = i - 1; j >= 0; j--)
	{
		c += ((b[j] - '0') * potencia);
		potencia *= 10;
	}
	if (c > INT_MAX)
	{
		return (0);
	}
	while (c != 0)
	{
		num1 = c % 10;
		num2 += num1 << k;
		c = c / 10;
		k++;
	}
	return (num2);
}
