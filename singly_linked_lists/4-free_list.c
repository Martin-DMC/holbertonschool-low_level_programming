#include <stdlib.h>
#include "lists.h"
/**
 * free_list - libera la memoria de todos los nodos añadidos
 * @head: puntero a cabeza de lista
 */
void free_list(list_t *head)
{
	list_t *tmp = head, *next;

	if (head == NULL)
		return;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = next;
	}
}
