#include "holberton.h"

/**
 * _strcmp - Entry point
 * @s1: d
 * @s2: dfd
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
  int i, j;
  i = 0;
  j = 0;

  while (s1[i] != '\0')
    {
      i++;
    }

  while (s2[j] != '\0')
    {
      j++;
    }

  if (i > j)
    {
      return (15);
    }
  else if (i < j)
    {
      return (-15);
    }
  else
    {
      return (0);
    }
}