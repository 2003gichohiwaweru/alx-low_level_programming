#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *lean;

	if (head == NULL)
		return;

	while (*head)
	{
		lean = (*head)->next;
		free(*head);
		*head = lean;
	}

	*head = NULL;
}
