#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *hr = *head;
	unsigned int i;

	if (hr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(hr);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (hr->next == NULL)
			return (-1);

		hr = hr->next;
	}

	del = hr->next;
	hr->next = del->next;
	free(del);
	return (1);
}
