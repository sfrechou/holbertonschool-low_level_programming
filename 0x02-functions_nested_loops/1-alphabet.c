#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar (abc);
}
_putchar ('\n');
}
