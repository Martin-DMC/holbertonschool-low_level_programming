/**
 * fibonacci1 - imprime la suma
 *
 * Description: imprime la suma de  num fibonacci < 4000000
 *
 * Return: retorna el total
 */
#include <stdio.h>
#include "main.h"

long fibonacci1(void)
{
	long num1 = 1;
	long num2 = 2;
	long r;
	long i;
	long total = 0;

	for (i = 0; i < 48 && r <= 4000000; i++)
	{
		r = num1 + num2;
		if (num2 % 2 == 0)
		{
			total = total + num2;
		}
		num1 = num2;
		num2 = r;

	}
	return (total);
}
/**
 * main - punto de entrada del programa
 *
 * Description: llama la a la funcion anterior
 *
 * Return: retorna 0
 */
#include <stdio.h>

int main(void)
{
	int r;

	r = fibonacci1();
	printf("%d\n", r);

	return (r);
}
