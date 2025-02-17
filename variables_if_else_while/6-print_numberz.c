/**
 * main - imprime por pantalla con putchar
 * Description: imprime una cadena de numeros por pantalla
 * Return: retorna 0
 */
#include <stdio.h>

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
