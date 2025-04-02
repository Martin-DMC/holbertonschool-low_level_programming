#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - devuelve un puntero al nodo indicado
 * @head: puntero a cabeza de lista
 * @index: indice del nodo requerido
 *
 * Return: puntero al nodo o NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node, *tmp = head;
	unsigned int contador = 0;

	if (head == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		contador++;
	}
	if (contador < index)
	{
		return (NULL);
	}
	else if (index == 0)
	{
		return (head);
	}
	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		index--;
		if (index == 0)
		{
			node = tmp;
			break;
		}
	}
	return (node);
}
