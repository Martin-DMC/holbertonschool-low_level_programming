/**
 * print_last_digit - imprime digito
 * @_: caracter
 *
 * Description: muestra el ultimo digito
 * Return: retorna 0
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int print_last_digit(int _)
{
	int last_d;

	_ = abs(_);
	last_d = _ % 10;
	_putchar(last_d + '0');

	return (last_d);

}
