/**
 * main - imprime abecedario
 * Description: imprime el abecedario omitiendo char
 * Return: retorna 0
 */
#include <stdio.h>

int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != 'e' && str[i] != 'q')
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
