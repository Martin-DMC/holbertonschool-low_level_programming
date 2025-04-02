#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_dlistint - imprime los enteros de la lista enlazada
 * @h: puntero a la cabeza de la lista
 *
 * Return: cantidad de nodos en la lista o NULL
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n;
	size_t contador = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		n = h->n;
		printf("%i\n", n);
		contador++;
		h = h->next;
	}

	return (contador);
}
