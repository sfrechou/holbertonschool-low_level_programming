#include "lists.h"

/**
 * insert_dnodeint_at_index - function that prints number of elements in list
 * @h: pointer to list to print
 * @idx: idx
 * @n: ene
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	temp = *h;

	if (idx == 0)
	{
		newnode->n = n;
		newnode->next = *h;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	newnode->n = n;
	newnode->next = temp->next;
	newnode->prev = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = newnode;
	}
	temp->next = newnode;
	return (newnode);
}
