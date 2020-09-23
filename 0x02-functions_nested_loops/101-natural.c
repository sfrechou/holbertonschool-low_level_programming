#include <stdio.h>
#include "holberton.h"
void natural(void);
/**
 * main - writes the character c to stdout
 * : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
natural();
return (0);
}

/**
 * natural - writes the character c to stdout
 * : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void natural(void)
{
int sum = 0;
int a;
for (a = 0; a < 1024; a++)
{
if ((a % 3 == 0) || (a % 5 == 0))
{
sum += a;
}
}
printf("%d\n", sum);
}
