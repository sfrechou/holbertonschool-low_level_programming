#include "lists.h"

/**
 * premain - print before main
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
