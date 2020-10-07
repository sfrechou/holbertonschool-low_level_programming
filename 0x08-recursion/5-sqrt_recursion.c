#include "holberton.h"
int _sqrt2(int a, int n);

/**
 * _sqrt_recursion - Entry point
 * @n: d
 *
 *
 * Return: Always 0 (Success)
 */
int _sqrt2(int a, int n)
{
if ((a * a) == n)
{
return (a);
}
if ((a * a) > n)
{
return (-1);
}
return (_sqrt2((a + 1), n));
}

/**
 * _sqrt_recursion - Entry point
 * @n: d
 *
 *
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
return (_sqrt2(1, n));
}
