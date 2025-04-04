#include "main.h"
/**
 * print_binary - convierte los numeros enteros en binarios e imprime
 * @n: numero a imprimir en binario
 */
void print_binary(unsigned long int n)
{
	int cant_bit = 64, no_print = 0;
	int bit_pos = cant_bit - 1;

	if (n == 0)
		_putchar('0');
	else
	{
		while (bit_pos >= 0)
		{

			if ((n & (1UL << bit_pos)) != 0)
			{
				_putchar('1');
				no_print = 1;
			}
			else if (no_print != 0)
			{
				_putchar('0');
			}
			bit_pos--;
		}
	}
}
