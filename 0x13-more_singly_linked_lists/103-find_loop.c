#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sh, *tx;

	if (head == NULL || head->next == NULL)
		return (NULL);

	sh = head->next;
	tx = (head->next)->next;

	while (tx)
	{
		if (sh == tx)
		{
			sh = head;

			while (sh != tx)
			{
				sh = sh->next;
				tx = tx->next;
			}

			return (sh);
		}

		sh = sh->next;
		tx = (tx->next)->next;
	}

	return (NULL);
}
