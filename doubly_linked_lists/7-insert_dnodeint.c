#include "lists.h"
#include <stdlib.h>
/**
 * cont_nodo - contador de nodos auxiliar
 * @h: puntero a la cabeza de la lista
 *
 * Return: cantidad de nodos;
 */
unsigned int cont_nodo(dlistint_t **h)
{
	dlistint_t *tmp = *h;
	unsigned int n = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		n++;
	}
	return (n);
}
/**
 * caso_igual_uno - maneja el caso en que idx es == 1
 * @h: puntero a la cabeza
 * @new: puntero al nuevo nodo
 * @next: puntero a la variable next
 *
 * Return: puntero a new modificado
 */
dlistint_t *caso_igual_uno(dlistint_t **h, dlistint_t *new, dlistint_t *next)
	{
		next = (*h)->next;
		new->next = next;
		new->prev = *h;
		(*h)->next = new;
		if ((*h)->next != NULL)
			(new->next)->prev = new;
		return (new);
	}
/**
 * add_nodo - adiere nodos en medio de la lista
 * @new: puntero al nodo new
 * @next: puntero auxiliar
 * @h: cabeza de lista
 * @idx: indice necesario
 *
 * Return: puntero a new modificado
 */
dlistint_t *add_nodo(
		dlistint_t *new,
		dlistint_t *next,
		dlistint_t **h,
		unsigned int idx
		)
{
	dlistint_t *tmp = *h;
	unsigned int cant_nodo = 0;

	while (tmp != NULL)
	{
		if (cant_nodo == (idx - 1))
		{
			next = tmp->next;
			new->next = next;
			new->prev = tmp;
			tmp->next = new;
			(new->next)->prev = new;
		}
		tmp = tmp->next;
		cant_nodo++;
	}
	return (new);
}
/**
 * insert_dnodeint_at_index - agrega un nodo e una posicion especifica
 * @h: puntero a la cabeza de la lista
 * @idx: posicion deseada
 * @n: contenido del nodo
 *
 * Return: puntero al nuevo nodo o NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next = NULL;
	unsigned int cant_nodo = 0;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	cant_nodo = cont_nodo(h);
	if (idx == cant_nodo)
	{
		new = add_dnodeint_end(h, n);
	}
	else if (idx > cant_nodo)
	{
		return (NULL);
	}
	else if (idx == 1)
	{
		new = caso_igual_uno(h, new, next);
	}
	else
	{
		new = add_nodo(new, next, h, idx);
	}
	return (new);
}
