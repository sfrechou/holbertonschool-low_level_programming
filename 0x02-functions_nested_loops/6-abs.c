#include "holberton.h"

/**
 * _abs - writes the character c to stdout
 *@num: variable
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int num)
{
if (num < 0)
{
num = -num;
}
return (num);
}
