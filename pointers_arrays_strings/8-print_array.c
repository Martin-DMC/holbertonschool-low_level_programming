/**
 * print_array - imprime array
 * @a: array
 * @n: cantidad
 *
 * Description: imprime el contenido de un array
 */
#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
