#include "holberton.h"

/**
 * _strspn - Entry point
 * @s: d
 * @accept: d
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, k;
k = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
k++;
break;
}
}
if (s[i] != accept[j])
{
break;
}
}
return (k);
}
