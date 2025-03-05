/**
 * main - muestra cantidad de argumentos
 * @argc: cantidad
 * @argv: argumentos
 *
 * Return: retorna 0
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	if (argv != 0)
	{
		return (0);
	}
	return (0);
}
