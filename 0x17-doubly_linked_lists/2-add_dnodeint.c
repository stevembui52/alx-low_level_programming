#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list
  * @head:head node of the list
  * @n:value in the list
  * Return:address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		printf("error allocating memory\n");
		return NULL;
	}

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->head = NULL;
		*head = new;
	}
	else
	{
		*new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
