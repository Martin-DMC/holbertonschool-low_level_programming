/**
 * fibonacci1 - imprime suma
 *
 * Description: imprime la suma de  num fibonacci < 4000000
 */
#include <stdio.h>
#include "main.h"

void fibonacci1(void)
{
	long num1 = 1;
	long num2 = 2;
	long r;
	long i;
	long total = 0;

	for (i = 0; i < 48 && r <= 4000000; i++)
	{
		r = num1 + num2;
		if (num1 % 2 == 0)
		{
			total = total + num1;
		}
		num1 = num2;
		num2 = r;

	}
	printf("%ld\n", total);
}
/**
 * main - punto de entrada del programa
 *
 * Description: llama la a la funcion anterior
 *
 * Return: retorna 0
 */

int main(void)
{
	fibonacci1();

	return (0);
}
