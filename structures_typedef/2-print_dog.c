#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - Imprime la información de una estructura dog
 * @d: Puntero a la estructura dog
 *
 * Descripción: Si algún campo es NULL, imprime "(nil)" en su lugar.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
