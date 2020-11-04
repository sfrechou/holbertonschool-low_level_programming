#include "lists.h"

/**
 * reverse_listint - function that prints number of elements in list
 * @head: pointer to list to print
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	int loop = 0;
	unsigned int n, i;

	if (head == NULL)
	{
		exit(98);
	}
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			loop = 1;
		}
		loop = 0;
		printf("Entro While\n");
	}

	if (loop == 1)
	{
		slow = head;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
			n++;
		}
		printf("%d\n", n);
		slow = head;
		for (i = 0; i < (n - 1); i++)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
		}
		printf("-> [%p] %d\n", (void *)fast, fast->n);
	}
	else
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	return (n);
}
