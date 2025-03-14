#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - copia cadena
 * @str: cadena original
 *
 * Return: puntero a copia o NULL
 */
char *_strdup(char *str)
{
	unsigned int len = 0, i;
	char *copia;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	copia = (char *)malloc((len + 1) * sizeof(char));
	if (copia == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		copia[i] = str[i];
	}
	return (copia);
}
/**
 * new_dog - crea un nuevo perro
 * @name: puntero a nombre
 * @age: edad
 * @owner: puntero a dueño
 *
 * Return: retorna puntero a nuevo perro
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;


	return (d);
}
