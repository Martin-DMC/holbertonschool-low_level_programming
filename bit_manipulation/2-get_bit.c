#include "main.h"
/**
 * get_bit - obtiene el valor del bit indicado
 * @n: numero a convertir
 * @index: bit indicado
 *
 * Return: valor del bit o -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int cant_bit = 64, r;
	unsigned int bit_pos = 0;

	if (n == 0)
		return (0);
	while (bit_pos < cant_bit)
	{
		if ((n & (1UL << bit_pos)) != 0)
			r = 1;
		else
			r = 0;
		if (bit_pos == index)
			return (r);
		bit_pos++;
	}
	return (-1);
}
