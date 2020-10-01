#include "holberton.h"

/**
 * _string_toupper - Entry point
 * @p: df
 * 
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *p)
{
  int i;
  
  for (i = 0; p[i] != '\0'; i++)
    {
      if (p[i] >= 97 && p[i] <= 122)
	{
	  p[i] = p[i] - 32;
	}
    }
  return (p);
}
