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
int i, j, k;
i = 0;
j = 0;

while (haystack[i] != '\0')
{
k = i;
while (needle[j] != '\0')
{
if (haystack[k] != needle[j])
{
break;
}
k++;
j++;
}
if (needle[j] == '\0')
{
return (haystack + i);
}
else
{
i++;
j = 0;
}
}
return (0);
}
