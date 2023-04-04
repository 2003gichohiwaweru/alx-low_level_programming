#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *mp, *chr = *head;
	unsigned int lean;

	mp = malloc(sizeof(listint_t));
	if (mp == NULL)
		return (NULL);

	mp->n = n;

	if (idx == 0)
	{
		mp->next = chr;
		*head = mp;
		return (mp);
	}

	for (lean = 0; lean < (idx - 1); lean++)
	{
		if (chr == NULL || chr->next == NULL)
			return (NULL);

		chr = chr->next;
	}

	mp->next = chr->next;
	chr->next = mp;

	return (mp);
}
