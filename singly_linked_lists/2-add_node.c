#include "lists.h"
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len, i;

	if (str == NULL)
		return (NULL);
	else
	{
		len = 0;
		i = 0;
		while (str[i])
		{
			len++;
			i++;
		}
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
	new->next = *head;
	*head = new;

	return (new);
}
