#include "lists.h"

/**
 * delete_dnodeint_at_index - function that prints number of elements in list
 * @head: pointer to list to print
 * @index: index
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *following = NULL;
	unsigned int i = 0;

	if ((*head) == NULL)
	{
		return (-1);
	}
	temp = (*head);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}
	following = temp->next->next;
	if (temp->next->next != NULL)
		temp->next->next->prev = temp;
	free(temp->next);
	temp->next = following;
	return (1);
}
