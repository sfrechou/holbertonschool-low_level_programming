#include "holberton.h"

/**
 * puts2 - Entry point
 * @str: d
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int i, length;
i = 0;

for (length = 0; *(str + length) != '\0'; length++)
{
}

while (i < length)
{
_putchar (str[i]);
i += 2;
}
_putchar ('\n');
}
