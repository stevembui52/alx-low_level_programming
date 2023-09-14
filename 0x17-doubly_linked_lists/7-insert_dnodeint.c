#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h:pointer to head node
  * @idx:index at which the element n is to be placed
  * @n:element to place at idx
  * Return:adress  of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *curr;
	unsigned int count;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	curr = *h;
	for (count = 0; count < idx - 1; count++)
	{
		if (curr == NULL)
		{
			return (NULL);
		}
		curr = curr->next;
	}
	if (curr == NULL)
		return (NULL);
	new->next = curr->next;
	new->prev = curr;
	if (curr->next != NULL)
	{
		curr->next->prev = new;
	}
	curr->next = new;
	return (new);
}
