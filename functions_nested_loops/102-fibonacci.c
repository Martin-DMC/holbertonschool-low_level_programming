/**
 * fibonacci - imprime numeros
 * @num1: first num
 * @num2: second num
 *
 * Description: imprime los primeros 50 num fibonacci
 */
#include <stdio.h>
#include "main.h"

void fibonacci(long num1, long num2)
{
	long r;
	int i;

	printf("%ld, %ld,", num1, num2);

	for (i = 0; i < 48; i++)
	{
		r = num1 + num2;
		if (i == 47)
		{
			printf(" %ld\n", r);
		}
		else
		{
			printf(" %ld,", r);
		}
		num1 = num2;
		num2 = r;

	}
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
	fibonacci(1, 2);

	return (0);
}
