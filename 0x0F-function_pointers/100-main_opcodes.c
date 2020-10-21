#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: s
 * @argv: s
 *
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
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (unsigned char *)main;
	for (i = 0; i < n - 1; i++, p++)
	{
		printf("%02x ", *p);
	}
	p++;
	printf("%02x\n", *p);
	return (0);
}
