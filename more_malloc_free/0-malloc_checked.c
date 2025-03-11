/**
 * malloc_checked - asigna memoria dinamica
 * @b: cantidad de memoria
 *
 * Return: puntero
 */
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
