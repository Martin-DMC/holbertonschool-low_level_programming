#include <stdio.h>
#include <stdlib.h>
/**
 * int_positivo - verifiva si hay letras
 * @str: cadena de texto
 *
 * Return: retorna 1, 0 error
 */
int int_positivo(char *str)
{
	int i = 0;

	if (str[0] == '\0')
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
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
	int suma;
	int i, a;

	if (argc == 1)
	{
		printf("0\n");
		return (0);

	}
	suma = 0;
	for (i = 1; i < argc; i++)
	{
		if (int_positivo(argv[i]))
		{
			a = atoi(argv[i]);
			suma += a;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", suma);

	return (0);
}
