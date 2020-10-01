#include "holberton.h"

/**
 * reverse_array - Entry point
 * @a: d
 * @n: dfd
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
  int i, t;
  
  i = 0;
  n -= 1;

  while (i < n)
    {
      t = a[i];
      a[i] = a[n];
      a[n] = t;
      i++;
      n--;
    }
}

