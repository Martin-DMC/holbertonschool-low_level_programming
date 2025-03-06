#include <stdio.h>
#include <stdlib.h>
/**
 * calculos - realiza los calculos de main
 * @cents: centavos
 *
 * Return: cantidad de monedas
 */
int calculos(int cents)
{
	int cant = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			cant += 1;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			cant += 1;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			cant += 1;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			cant += 1;
		}
		else if (cents >= 1)
		{
			cents -= 1;
			cant += 1;
		}
	}
	return (cant);
}
/**
 * main - suma numeros positivos
 * @argc: cantidad
 * @argv: array
 *
 * Return: retorna 0, error 1
 */

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", calculos(cents));
	return (0);
}
