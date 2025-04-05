#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * conversor_binario - toma un int y devuelve el numero binatio en str
 * @x: numero a convertir
 *
 * Return: puntero al str
 */
char *conversor_binario(unsigned long int x)
{
	int cant_bit = 64, i = 0;
	int bit_pos = cant_bit - 1;
	char *num_bin;

	num_bin = malloc(sizeof(char) * 65);
	if (num_bin == NULL)
		return (NULL);
	while (bit_pos >= 0)
	{
		if ((x & (1UL << bit_pos)) != 0)
		{
			num_bin[i] = '1';
		}
		else
		{
			num_bin[i] = '0';
		}
		i++;
		bit_pos--;
	}
	num_bin[i] = '\0';
	return (num_bin);
}
/**
 * cont_dif - cuenta las diferencias entre dos str
 * @a: primer str
 * @b: str a comparar
 *
 * Return: cantidad de diferencias
 */
unsigned int cont_dif(char *a, char *b)
{
	unsigned int i = 0, contador = 0;

	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
			contador += 1;
		i++;
	}
	return (contador);
}
/**
 * flip_bits - retorna cuantos bit modificar para convertir n en m
 * @n: primer numero
 * @m: segundo numero
 *
 * Return: cantidad de bits a modificar
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	char *a, *b;
	unsigned int re;

	a = conversor_binario(n);
	b = conversor_binario(m);
	re = cont_dif(a, b);

	free(a);
	free(b);

	return (re);
}
