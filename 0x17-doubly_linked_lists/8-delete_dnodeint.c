#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at
 * a given index in a dlistint_t list.
 * @head: A double pointer to the head of the dlistint_t list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if successful, or -1 if the node is NULL.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = *head;

	if (*head == NULL)
		return (-1);

	for (i = 0; current && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	if (current == *head)
		*head = current->next;

	if (current->prev)
		current->prev->next = current->next;

	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
