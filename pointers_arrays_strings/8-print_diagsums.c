/**
 * print_diagsums - suma las diagonales
 * @a: puntero
 * @size: tamaño
 */
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum, sum2);
}
