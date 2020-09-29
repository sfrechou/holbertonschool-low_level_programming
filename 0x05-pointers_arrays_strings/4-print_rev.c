#include "holberton.h"

/**
 * print_rev - Entry point
 * @s: d
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
  int length;
  length = 0;

  while (*s != '\0')
    {
      length++;
      s++;
    }
  s--;

  while (length >= 0)
    {
      _putchar(*s);
      length--;
      s--;
    }
  _putchar ('\n');
}
