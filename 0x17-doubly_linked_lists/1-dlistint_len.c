#include "lists.h"

/**
 * dlistint_len - function that prints number of elements in list
 * @h: pointer to list to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	if (h == NULL)
	{
		return (elements);
	}
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
