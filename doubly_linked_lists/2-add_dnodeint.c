#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - agrega nodo al inicio de la lista
 * @head: puntero a la cabeza de la lista
 * @n: contenido
 *
 * Return: puntero al nuevo nodo o NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	else
	{
		new->next = NULL;
	}
	*head = new;

	return (new);
}
