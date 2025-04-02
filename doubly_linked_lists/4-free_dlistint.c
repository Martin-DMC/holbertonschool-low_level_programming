#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - libera la memoria de los nodos creados
 * @head: puntero a cabeza de lista
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head, *next;

	if (head == NULL)
		return;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
