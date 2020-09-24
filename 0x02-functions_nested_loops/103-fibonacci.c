#include <stdio.h>
#include "holberton.h"
void fibonacci(void);
/**
 * main - writes the character c to stdout
 * : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
  fibonacci();
  return (0);
}

/**
 * fibonacci - writes the character c to stdout
 * : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void fibonacci(void)
{
long int a, now, before, next, sum;
now = 1;
before = 0;
sum = 0;
if (now < 4000000)
{
for (a = 0; ; a++)
{
next = now + before;
if ((now % 2) == 0)
{
sum += now;
before = now;
now = next;
}
printf("%ld\n", sum);
}
printf("\n");
}
}
