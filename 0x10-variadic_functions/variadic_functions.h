#ifndef VARIABLE_FUNCTIONS_H
#define VARIABLE_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct tipo - Struct op
 *
 * @caracter: The operator
 * @f: The function associated
 */
typedef struct tipo
{
	char *caracter;
	void (*f)();
} tipos;

#endif
