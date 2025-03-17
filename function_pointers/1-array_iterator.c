#include <stddef.h>
/**
 * array_iterator - itera por el array segun la accion indicada
 * @array: pointer of array
 * @size: size of array
 * @action: determinated action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, tam = size;

	while (i < tam)
	{
		action(array[i]);
		i++;
	}
	i = 0;
}
