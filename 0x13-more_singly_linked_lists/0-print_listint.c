#include "lists.h"

/**
 * print_listint - function that prints a list
 * @h: pointer to list to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (i);
	}
	while (h != NULL)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		else
		{
			printf("0\n");
		}
		i++;
		h = h->next;
	}
	return (i);
}
