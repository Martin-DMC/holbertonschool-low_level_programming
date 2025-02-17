/**
 * main - imprime el abecedario
 * Description: imprime todo el abecedario con putchar
 * Return: retorna 0
 */
#include <stdio.h>

int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
