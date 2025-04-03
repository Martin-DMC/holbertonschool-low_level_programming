#include "lists.h"
#include <stdlib.h>
/**
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int cont_nodo = 0;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		cont_nodo++;
	}
	if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	else if (idx == cont_nodo)
	{
		add_dnodeint_end(h, n);
	}
	else if (idx > cont_nodo)
	{
		return (NULL);
	}
	else
	{
		tmp = *h;
		while (tmp != NULL)
		{
			if (idx == 1)
			{
				new->prev = tmp;
				tmp->next = new;
			}
			if (idx == 0)
			{
				new->next = tmp;
				tmp->prev = new;
			}
			tmp = tmp->next;
			idx--;
		}
	}

	return (new);
}
