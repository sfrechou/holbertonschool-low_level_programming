#include "holberton.h"

/**
 * _pow_recursion - Entry point
 * @x: d
 * @y: d
 *
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
if (y == 1)
{
return (x);
}
return (x * _pow_recursion(x, (y - 1)));
}
