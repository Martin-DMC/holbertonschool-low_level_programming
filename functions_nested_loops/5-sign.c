/**
 * print_sign - verifica mayusculas
 * @n: caracter
 *
 * Description: verifica si un caracter es mayus o minus
 * Return: retorna 0
 */

#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}
