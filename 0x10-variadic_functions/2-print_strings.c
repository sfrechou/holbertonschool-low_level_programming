#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry point
 * @separator: s
 * @n: n
 *
 *
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        unsigned int i;
        va_list mi_lista;
	char * strings;

        if (n > 0)
        {
                va_start(mi_lista, n);
                for (i = 0; i < n; i++)
                {
			strings = (va_arg(mi_lista, char*));
			if (strings != NULL)
			{
				printf("%s", strings);
				if (i < n - 1 && separator != NULL)
				{
					printf("%s", separator);
				}
			}
			else
		       	{
	       			printf("(nil)");
       			}
			strings = "";
                }
		va_end(mi_lista);
	}
	printf("\n");
}
