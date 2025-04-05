#include "main.h"
/**
 * set_bit - modifica el bit indicado a 1
 * @n: puntero al numero
 * @index: bit indicado
 *
 * Return: 1 o -1 si hay fallos
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cant_bit = 64;
	unsigned int bit_pos = 0;

	if (index >= cant_bit)
		return (-1);
	while (bit_pos < cant_bit)
	{
		if (bit_pos == index)
		{
			*n = *n | (1UL << index);
			return (1);
		}
		bit_pos++;
	}
	return (-1);
}
