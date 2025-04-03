#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - suma el contenido de todos los nodos
 * @head: puntero a la cabeza de la lista
 *
 * Return: total de la suma o NULL
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int suma = 0;

	if (head == NULL)
		return (0);
	while (tmp != NULL)
	{
		suma += tmp->n;
		tmp = tmp->next;
	}
	return (suma);
}
