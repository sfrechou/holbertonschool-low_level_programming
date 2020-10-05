#include "holberton.h"

/**
 * _strstr - Entry point
 * @haystack: d
 * @needle: d
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; needle[i] != '\0'; i++)
{
for (j = 0; haystack[j] != '\0'; j++)
{
if (needle[i] == haystack[j])
{
continue;
}
}
return (needle + i);
}
return (0);
}
