#include <stdlib.h>
/**
 * _realloc - reasigna memoria a un nuevo bloque
 * @ptr: puntero original
 * @old_size: tamaño anterior
 * @new_size: nuevo tamaño
 *
 * Return: puntero al nuevo bloque.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a = ptr, *b;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	b = malloc(new_size);
	if (b == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		b[i] = a[i];

	free(ptr);
	return (b);
}
