#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - realiza operaciones de calculo con argumentos de linea
 * @argc: cantidad de argumentos
 * @argv: valor de argumentos
 *
 * Return: siempre 0
 */
int main(int argc, char *argv[])
{
	int a, b, resultado;
	char *s;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	op = get_op_func(s);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((b == 0 && strcmp(s, "%") == 0) || (b == 0 && strcmp(s, "/") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	resultado = op(a, b);
	printf("%d\n", resultado);

	return (0);
}
