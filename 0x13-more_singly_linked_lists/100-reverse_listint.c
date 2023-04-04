#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *top, *bottom;

	if (head == NULL || *head == NULL)
		return (NULL);

	bottom = NULL;

	while ((*head)->next != NULL)
	{
		top = (*head)->next;
		(*head)->next = bottom;
		bottom = *head;
		*head = top;
	}

	(*head)->next = bottom;

	return (*head);
}
