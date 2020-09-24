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
  long int a, now, before, next;
  now = 1;
  before = 0;
  for (a = 0; a <= 97; a++)
    {
      next = now + before;
      printf("%ld", next);
      before = now;
      now = next;
      if (a != 97)
	{
	  printf(", ");
	}
    }
  printf("\n");
}
