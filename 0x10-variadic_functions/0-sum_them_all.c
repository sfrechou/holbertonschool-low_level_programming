#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n: s
 *
 *
 *
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int resultado;
	va_list mi_lista;

	resultado = 0;
	if (n == 0)
	{
		return (0);
	}
	if (n > 0)
	{
		va_start(mi_lista, n);
		for (i = 0; i < n; i++)
		{
			resultado += va_arg(mi_lista, int);
		}
		va_end(mi_lista);
	}
	return (resultado);
}
