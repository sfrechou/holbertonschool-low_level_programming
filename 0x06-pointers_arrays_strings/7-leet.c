#include "holberton.h"

/**
 * leet - Entry point
 * @p: d
 *
 *
 * Return: Always 0 (Success)
 */
char *leet(char *p)
{
int i, j;
char cap[5] = {"aoetl"};
char num[5] = {"40371"};

for (i = 0; p[i] != '\0'; i++)
{
for (j = 0; cap[j] != '\0'; j++)
{
if (p[i] == cap[j] || p[i] == cap[j] - 32)
{
p[i] = num[j];
}
}
}
return (p);
}
