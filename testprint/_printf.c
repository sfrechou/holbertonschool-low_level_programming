#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

void printchar(va_list list);
void printstring(va_list list);
void printpercent(va_list list);
void printint(va_list list);
void printdecimal(va_list list);
int main(void);


/**
 * _printf - Entry point
 * @format: s
 *
 * Return: Always 0 (Success)
 */
void _printf(const char * const format, ...)
{
	print_format functions[] = {
		{"c", printchar},
		{"s", printstring},
		{"%", printpercent},
		{"i", printint},
		{"d", printdecimal},
		{NULL, NULL}
	};
	int i, j, flag = 0;
	va_list arguments;

	va_start(arguments, format);
	i = 0;

	while (format[i] != '\0')
	{
		flag = 0;
			if (format[i] == '%')
			{
				while(functions[j].caracter != NULL)
				{
					if(format[i + 1] == functions[j].caracter[0])
					{
						flag = 1;
						functions[j].f(arguments);
						break;
					}
					j++;
				}
			}

		if (flag == 1)
		{
			if (format[i + 1] == '\0' || format[i + 2] == '\0')
				break;
			i += 2;
		}
		else
		{
			putchar(format[i]);
			i++;
		}
		j = 0;
	}
	va_end(arguments);
}

/**
 * printchar - Entry point
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printchar(va_list arguments)
{
	putchar(va_arg(arguments, int));
}

/**
 * printstring - Entry point
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printstring(va_list arguments)
{
        int length, k;
	char *string;

	string = va_arg(arguments, char *);
	length = strlen(string);
	for (k = 0; k < length; k++)
	{
		putchar(string[k]);
	}
}

/**
 * printpercent - Entry point
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printpercent(va_list arguments)
{
	(void)arguments;
	putchar('%');
}

/**
 * printint - Entry point
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printint(va_list arguments)
{
	int i;
	int count = 0;
	char* v = calloc(11, sizeof(char));

	for (i = va_arg(arguments, int); i > 0; i /= 10)
	{
		v[++count] = i % 10 + '0';
	}
	v[0] = count + '0';
	write(1, v[1], v[0]);
	free(v);
	count = 0;
}

/**
 * printdecimal - Entry point
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printdecimal(va_list arguments)
{
        write(1, arguments, 1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Character:[%c%c%c]\n", 'H', 'o', 'l');
	_printf("String:[%s%s%s]\n", "Hola", "printf", "casero");
	_printf("Double Percent:[%%%%]\n");
	_printf("Character:[%d%d%d]\n", 01, 410000, 8);
	_printf("Character:[%i%i%i]\n", 01, 410000, 8);
	return (0);
}
