#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *sh, *tx;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	sh = head->next;
	tx = (head->next)->next;

	while (tx)
	{
		if (sh == tx)
		{
			sh = head;
			while (sh != tx)
			{
				nodes++;
				sh = sh->next;
				tx = tx->next;
			}

			sh = sh->next;
			while (sh != tx)
			{
				nodes++;
				sh = sh->next;
			}

			return (nodes);
		}

		sh = sh->next;
		tx = (tx->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *la;
	size_t nodes, in;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			la = (*h)->next;
			free(*h);
			*h = la;
		}
	}

	else
	{
		for (in = 0; in < nodes; in++)
		{
			la = (*h)->next;
			free(*h);
			*h = la;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
