#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * binary_to_unit - conversor de numeros binarios a enteros
 * @b: puntero a la cadena de binarios
 *
 * Return: numero convertido o 0 si falla
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, total = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			total = total * 2;
		}
		else if (b[i] == '1')
		{
			total = (total * 2) + 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (total);
}
