#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - returns the position of the first match
 * @array: numbers array
 * @size: size of array
 * @cmp: determinated action
 *
 * Return: -1 if errors or position
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, a = 0;

	if (size <= 0)
		return (-1);

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	while (i < size)
	{
		a = cmp(array[i]);

		if (a != 0)
			return (i);
		i++;
	}
	return (-1);
}
