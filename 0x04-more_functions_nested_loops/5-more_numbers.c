#include "holberton.h"

/**
 * more_numbers - checks if c is lowercase
 * : The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
  int n, a;
 

  for (n = 0; n <= 9; n++)
    {
      for (a = 0; a <= 14; a++)
	{
	  if (a > 9)
	    {
	      _putchar (49);
	    }	  
	  _putchar ((a % 10) + '0'); 
	}
      _putchar ('\n');
    }
 }
