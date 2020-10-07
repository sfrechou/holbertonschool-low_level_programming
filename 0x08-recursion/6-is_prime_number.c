#include "holberton.h"
int prime(int n, int x);

/**
 * prime - Entry point
 * @n: d
 * @x: d
 *
 * Return: Always 0 (Success)
 */
int prime(int n, int x)
{
if (n % x == 0 && x < n)
{
return (0);
}
else if (n % x != 0 && x < n)
{
return (prime(n, x + 1));
}
return (1);
}

/**
 * is_prime_number - Entry point
 * @n: d
 *
 *
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
if (n <= 0)
{
return (0);
}
else if (n == 1)
{
return (0);
}
else
{
return (prime(n, 2));
}
}
