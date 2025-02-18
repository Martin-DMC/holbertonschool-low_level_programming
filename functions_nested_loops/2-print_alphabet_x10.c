/**
 * print_alphabet_x10 - imprime el abecedario
 * Description: imprime todo el abecedario  por 10 con putchar
 * Return: retorna 0
 */
#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int contador = 0;
	int i = 0;

	while (contador < 10)
	{
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		contador++;
		_putchar('\n');
	}
	_putchar('\n');

}
