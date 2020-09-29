#include "holberton.h"

/**
 * puts_half - Entry point
 * @str: d
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int length, n;
length = 0;

while (str[length] != '\0')
{
length++;
}

if (length % 2 != 0)
{
for (n = ((length + 1)/2); n < length; n++)
{
_putchar(str[n]);
}
}
else
{
for (n = (length / 2); n < length; n++)
{ 
_putchar(str[n]);
}
}
_putchar('\n');
}
