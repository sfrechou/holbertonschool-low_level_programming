#include "lists.h"

/**
 * pop_listint - function that prints number of elements in list
 * @head: pointer to list to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ene = 0;

	if (head == NULL || (*head) == NULL)
	{
		return (0);
	}
	else
	{
		ene = (*head)->n;
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}
	return (ene);
}
