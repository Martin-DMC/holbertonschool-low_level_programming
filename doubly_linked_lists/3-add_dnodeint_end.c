#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - agrega nodos al final de la lista
 * @head: puntero a la cabeza de la lista
 * @n: contenido
 *
 * Return: puntero al nuevo nodo o NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
