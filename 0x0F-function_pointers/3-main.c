#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

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
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
