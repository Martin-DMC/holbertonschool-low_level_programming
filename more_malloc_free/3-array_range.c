#include <stdlib.h>
/**
 * array_range - Crea un array de enteros desde min hasta max.
 * @min: mínimo
 * @max: máximo
 *
 * Return: Puntero al array, o NULL si falla.
 */
int *array_range(int min, int max)
{
	int *ptr, i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
