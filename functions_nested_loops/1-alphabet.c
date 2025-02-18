/**
 * print_alphabet - imprime mensaje
 * Description: imprime el abecedario por pantalla
 * Return: retorna 0
 */

#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
