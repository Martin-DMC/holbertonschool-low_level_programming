#include <stdlib.h>
/**
 * create_array - crea una matriz de caracteres
 * @size: tamaño
 * @c: caracter
 *
 * Return: puntero a matriz, NULL si falla
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = (char *)malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}
