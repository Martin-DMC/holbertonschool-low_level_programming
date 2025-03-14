#include "dog.h"
#include <string.h>
#include <stdlib.h>
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

	d->name = strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;


	return (d);
}
