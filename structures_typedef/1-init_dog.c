#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Inicializa una variable de tipo struct dog
 * @d: Puntero a la estructura
 * @name: Nombre perro
 * @age: Edad perro
 * @owner: Dueño perro
 *
 * Descripción: Si el puntero `d` es NULL, la función no hace nada.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
