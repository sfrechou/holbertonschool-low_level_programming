#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <ctype.h>

/**
 * main - Entry point
 * @argc: d
 * @argv: d
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int j, a, b;
j = 0;

for (a = 1; a <= argc - 1; a++)
{
for (b = 0; *(argv[a] + b) != '\0'; b++)
{
if (*(argv[a] + b) < '0' || *(argv[a] + b) > '9')
{
printf("Error\n");
return (1);
}
}
j = j + (atoi(argv[a]));
}
printf("%d\n", j);
return (0);
}
