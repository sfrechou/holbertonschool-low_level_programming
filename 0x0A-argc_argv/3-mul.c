#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry point
 * @argc: d
 * @argv: d
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, j;

if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i *j);
return (0);
}
if (argc <= 2)
{
printf("Error\n");
return (1);
}
return (0);
}
