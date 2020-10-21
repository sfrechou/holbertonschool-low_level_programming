#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array: s
 * @size: s
 * @action: s
 *
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, i;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	p = (char *)main;
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n - 1; i++, p++)
	{
		printf("%02x ", *p);
	}
	p++;
	printf("%02x\n", *p);
	return (0);
}
