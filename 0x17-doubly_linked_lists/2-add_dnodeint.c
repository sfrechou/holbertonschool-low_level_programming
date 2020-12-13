#include "lists.h"

/**
 * add_dnodeint - function that prints number of elements in list
 * @head: pointer to list to print
 * @n: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (head == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	(*head)->prev = newnode;
	return (newnode);
}
