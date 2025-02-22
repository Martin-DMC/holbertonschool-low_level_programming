/**
 * sumar_multiplos - sum multiplos
 * @num1: first num
 * @num2: second num
 *
 * Description: imprime mutiplos y los suma
 */
#include <stdio.h>

void sumar_multiplos(int num1, int num2)
{
	int i, sum;

	for (i = 2; i < 1024; i++)
	{

		if (i % num1 == 0 || i % num2 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
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
	sumar_multiplos(3, 5);

	return (0);
}
