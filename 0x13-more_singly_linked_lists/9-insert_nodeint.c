#include "lists.h"

/**
 * free_list - function that prints number of elements in list
 * @head: pointer to list to print
 * @idx: idx
 * @n: ene
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t)), *temp;
	unsigned int i;

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;
	temp = (*head);

	if (idx == 0)
	{
		newnode->next = temp;
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	if (temp != NULL)
	{
		newnode->next = temp->next;
		temp->next = newnode;
	}
	else
	{
		return (NULL);
	}
	return (newnode);
}
