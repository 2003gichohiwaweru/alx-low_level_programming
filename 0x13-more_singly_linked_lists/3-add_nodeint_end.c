#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mpya, *end;

	mpya = malloc(sizeof(listint_t));
	if (mpya == NULL)
		return (NULL);

	mpya->n = n;
	mpya->next = NULL;

	if (*head == NULL)
		*head = mpya;

	else
	{

		end = *head;
		while(end->next != NULL)
			end = end->next;
		end->next = mpya;
	}
	return (*head);
}
