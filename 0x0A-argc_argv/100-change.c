#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: d
 * @argv: d
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int x, cents;
cents = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);

if (x < 0)
{
printf("0\n");
}
else
{
for (; x - 25 >= 0; x -= 25, cents++)
{
}
for (; x - 10 >= 0; x -= 10, cents++)
{
}
for (; x - 5 >= 0; x -= 5, cents++)
{
}
for (; x - 2 >= 0; x -= 2, cents++)
{
}
if (x == 1)
{
cents++;
}
printf("%d\n", cents);
}
return (0);
}
