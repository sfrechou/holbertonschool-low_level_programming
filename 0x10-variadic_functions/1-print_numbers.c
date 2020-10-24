#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * @separator: s
 * @n: n
 *
 *
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mi_lista;

	if (n > 0)
	{
		va_start(mi_lista, n);
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(mi_lista, int));
			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(mi_lista);
	}
}
