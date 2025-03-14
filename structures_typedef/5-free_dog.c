#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - libera la memoria dinamica
 * @d: puntero estructura dog_t
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
