#include "lists.h"
/**
 * list_len - es un contador de los nodos que contiene la lista
 * @h: puntero al primer nodo
 *
 * Return: cantidad de nodos
 */
size_t list_len(const list_t *h)
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
