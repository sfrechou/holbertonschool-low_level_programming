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
void print_strings(const char *separator, const unsigned int n, ...)
{
        unsigned int i;
        va_list mi_lista;

        if (n > 0 && separator != NULL)
        {
                va_start(mi_lista, n);
                for (i = 0; i < n; i++)
                {
                        printf("%s", va_arg(mi_lista, char *));
                        if (i < n - 1)
                        {
                                printf("%s", separator);
                        }
                }
                printf("\n");
        }
        va_end(mi_lista);
}
