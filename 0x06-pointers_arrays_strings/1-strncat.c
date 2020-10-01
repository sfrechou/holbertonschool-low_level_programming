#include "holberton.h"

/**
 * _strncat - Entry point
 * @dest: d
 * @src: dfd
 * @n: d
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
  int i, j;
  j = 0;

  while (dest[j] != '\0')
    {
      j++;
    }

  for (i = 0 ; i < n && src[i] != '\0'; i++)
    {
      dest[j + i] = src[i];
    }
  return (dest);
}
