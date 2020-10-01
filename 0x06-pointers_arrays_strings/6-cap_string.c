#include "holberton.h"

/**
 * cap_string - Entry point
 * @p: d
 *
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *p)
{
int i;

for (i = 0; p[i] != '\0'; i++)
{
if (p[0] >= 97 && p[0] <= 122)
{
p[0] -= 32;
}
if (p[i] >= 9 && p[i] <= 10)
{
if (p[i + 1] >= 97 && p[i] <= 122)
{
p[i + 1] -= 32;
}
}
if (p[i] >= 32 && p[i] <= 34)
{
if (p[i + 1] >= 97 && p[i] <= 122)
{
p[i + 1] -= 32;
}
}
if (p[i] == 40 || p[i] == 41 || p[i] == 44 || p[i] == 46)
{
if (p[i + 1] >= 97 && p[i] <= 122)
{
p[i + 1] -= 32;
}
}
if (p[i] == 59 || p[i] == 63 || p[i] == 123 || p[i] == 125)
{
if (p[i + 1] >= 97 && p[i] <= 122)
{
p[i + 1] -= 32;
}
}
}
return (p);
}
