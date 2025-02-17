/**
 * main - imprime un mensaje
 * Description: imprime mensaje sin put ni printf
 * Return: retorna 0
 */

#include <unistd.h>

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
