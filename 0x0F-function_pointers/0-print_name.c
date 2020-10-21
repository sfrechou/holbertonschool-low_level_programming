#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Entry point
 * @name: s
 * @f: s
 *
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
