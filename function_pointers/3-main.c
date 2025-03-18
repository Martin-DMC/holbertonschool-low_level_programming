#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - realiza operaciones de calculo con argumentos de linea
 * @argc: cantidad de argumentos
 * @argv: valor de argumentos
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, resultado;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	if (s == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%")) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	resultado = get_op_func(s)(a, b);
	printf("%d\n", resultado);

	return (0);
}
