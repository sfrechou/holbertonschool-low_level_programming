#include "holberton.h"

/**
 * rev_string - Entry point
 * @s: d
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
int length, b;
char *start, *end, temp;

length = 0;

while (*(s + length) != '\0')
{
length++;
}

start = s;
end = s;

for (b = 0; b < (length - 1); b++)
{
end++;
}

for (b = 0; b < (length / 2); b++)
{
temp = *end;
*end = *start;
*start = temp;

start++;
end--;
}
}
