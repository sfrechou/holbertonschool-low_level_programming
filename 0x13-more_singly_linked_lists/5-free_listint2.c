#include "lists.h"

/**
 * free_listint2 - function that prints number of elements in list
 * @head: pointer to list to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}
	head = NULL;
}
