#include "lists.h"
#include <stdlib.h>
/**
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *prev = NULL;
	unsigned int cant_nodos, i = 0;

	if (*head == NULL)
		return (-1);

	cant_nodos = cont_nodo(head);

	if (cant_nodos < index)
		return (-1);
	while (tmp != NULL)
	{
		if (i == index)
		{
			(tmp->prev)->next = tmp->next;
			(tmp->next)->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
