#include "lists.h"

/**
 * add_node - function that prints number of elements in list
 * @head: pointer to list to print
 * @str: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *string;
	int i = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	string = strdup(str);
	while (string[i] != '\0')
	{
		i++;
	}
	newnode->str = string;
	newnode->len = strlen(string);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
