#include "holberton.h"

/**
 * rot13 - Entry point
 * @p: d
 *
 *
 * Return: Always 0 (Success)
 */
char *rot13(char *p)
{
int i, j;
char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; p[i] != '\0'; i++)
{
for (j = 0; abc[j] != '\0' && rot[j] != '\0'; j++)
{
if (p[i] == abc[j])
{
p[i] = rot[j];
break;
}
}
}
return (p);
}
