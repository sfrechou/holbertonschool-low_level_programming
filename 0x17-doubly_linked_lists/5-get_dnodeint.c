#include "lists.h"

/**
 * get_dnodeint_at_index - function that prints number of elements in list
 * @head: pointer to list to print
 * @index: index
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *nodo;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < index)
		{
			head = head->next;
			i++;
			if (head == NULL)
			{
				return (NULL);
			}
		}
		nodo = head;
	}
	return (nodo);
}
