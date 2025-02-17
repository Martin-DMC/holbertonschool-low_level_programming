/**
 * main - imprime conbinaciones
 * Description: imprime combinaciones de numeros simples
 * Return: retorna 0
 */
#include <stdio.h>

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
