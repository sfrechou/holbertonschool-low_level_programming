#include "holberton.h"
int _pow(int n);

/**
 * _atoi - Entry point
 * @s: d
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
int a, ini, fin, res, signo, n;

res = 0;
signo = 1;

for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == '-')
{
signo *= -1;
}
if ((s[a] >= '0') && (s[a] <= '9'))
{
break;
}
}
if (s[a] == '\0')
{
return (0);
}
else
{
ini = a;
for (n = 0; ((s[a] >= '0') && (s[a] <= '9')); a++)
{
fin = a;
}
for ( ; fin >= ini; fin--, n++)
{
res += ((s[fin] - '0') * _pow(n)) * signo;
}
return (res);
}
}

int _pow(int n)
{
int xres = 1;
int p;

for (p = 0; p < n; p++)
{
xres *= 10;
}
return (xres);
}
