#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - agrega nuevos nodos al final de la lista
 * @head: puntero con la cabeza de la lista
 * @str: contenido
 *
 * Return: puntero al nuevo nodo o NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = 0;
		while (str[len])
			len++;
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->len = len;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
