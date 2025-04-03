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
 * delete_dnodeint_at_index - elimina el nodo indicado
 * @head: puntero a la cabeza de la lista
 * @index: indice del nodo a eliminar
 *
 * Return: 1 exitoso, -1 fallo
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int cant_nodos, i = 0;

	if (*head == NULL)
		return (-1);
	cant_nodos = cont_nodo(head);
	if (cant_nodos < index)
		return (-1);
	while (tmp != NULL)
	{
		if (index == 0)
		{
			if ((tmp->next) == NULL)
			{
				*head = NULL;
				free(tmp);
				return (1);
			}
			else
			{
				*head = tmp->next;
				(*head)->prev = NULL;
				free(tmp);
				return (1);
			}
		}
		if (index == (cant_nodos - 1))
		{
			(tmp->prev)->next = NULL;
			free(tmp);
			return (1);
		}
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
