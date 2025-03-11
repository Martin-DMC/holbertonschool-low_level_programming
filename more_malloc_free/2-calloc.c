#include <stdlib.h>
/**
 * _calloc - Asigna memoria para una matriz e inicializa en 0
 * @nmemb: Número de elementos
 * @size: Tamaño de cada elemento en bytes
 *
 * Return: Puntero a la memoria asignada, o NULL en caso de error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	p = ptr;
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (ptr);
}
