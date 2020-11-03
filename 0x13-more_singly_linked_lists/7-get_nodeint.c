#include "lists.h"

/**
 * get_nodeint_at_index - function that prints number of elements in list
 * @head: pointer to list to print
 * @index: index
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nodo;

	if (head)
	{
		while (i < index)
		{
			head = head->next;
			i++;
		}
		nodo = head;
	}
	else
	{
		return (NULL);
	}
	return (nodo);
}
