#include <stdio.h>
#include "lists.h"
/**
 * print_list - imprime todos los elementos de la lista list_t
 * @h: puntero a la primera ubicacion
 *
 * Return: cantidad de nodos
 */
size_t print_list(const list_t *h)
{
	char *str;
	unsigned int len;
	size_t contador = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			str = "(nil)";
			len = 0;
		}
		else
		{
			str = h->str;
			len = h->len;
		}

		printf("[%u] %s\n", len, str);
		contador += 1;
		h = h->next;
	}

	return (contador);
}
