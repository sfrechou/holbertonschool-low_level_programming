#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int num)
{
int lastDigit = num % 10;
if (lastDigit < 0)
{
lastDigit = -lastDigit;
}
_putchar('0' + lastDigit);
return(lastDigit);
}
