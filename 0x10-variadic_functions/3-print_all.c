#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void printchar(char *str, va_list list);
void printint(char *str, va_list list);
void printfloat(char *str, va_list list);
void printstring(char *str, va_list list);

/**
 * print_all - Entry point
 * @format: s
 *
 *
 *
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	tipos type[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
		{NULL, NULL}
	};
	int a, b;
	va_list list;
	char *str;

	va_start(list, format);
	str = "";
	a = 0;
	b = 0;

	while (format[a] != '\0' && format != NULL)
	{
		while (type[b].caracter != NULL)
		{
			if (type[b].caracter[0] == format[a])
			{
				type[b].f(str, list);
				str = ", ";
			}
			b++;
		}
		a++;
		b = 0;
	}

	printf("\n");
	va_end(list);
}

/**
 * printchar - Entry point
 * @str: s
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printchar(char *str, va_list list)
{
	printf("%s%c", str, va_arg(list, int));
}

/**
 * printint - Entry point
 * @str: s
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printint(char *str, va_list list)
{
	printf("%s%i", str, va_arg(list, int));
}

/**
 * printfloat - Entry point
 * @str: s
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printfloat(char *str, va_list list)
{
        printf("%s%f", str, va_arg(list, double));
}

/**
 * printstring - Entry point
 * @str: s
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printstring(char *str, va_list list)
{
        char *temp;
        temp = va_arg(list, char *);

        if (temp == NULL)
        {
                printf("(nil)");
                return;
        }

        printf("%s%s", str, temp);
}