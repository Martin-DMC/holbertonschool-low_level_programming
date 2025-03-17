#include <stdio.h>
#include "calc.h"
int main (argc, argv[])
{
	int a, b, resultado;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	resultado = get_op_func(s)(a, b);

	if (resultado == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	if ((argv[2] == "/" || argv[2] == "%") && argv[3] == 0)
	{
		printf("Error\n");
		exit (100);
	}
}
