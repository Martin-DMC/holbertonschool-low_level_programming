#include "lists.h"
/**
 * dlistint_len - contador de nodos que contiene la lista
 * @h: puntero a la cabeza de la lista
 *
 * Return: cantidad de nodos
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t contador = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		contador++;
		h = h->next;
	}
	return (contador);
}
