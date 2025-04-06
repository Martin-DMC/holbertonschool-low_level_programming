#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * read_textfile - lee un archivo de texto y lo imprime en la stdout POSIX
 * @filename: puntero al archivo
 * @letters: cantidad de letras a impimir
 *
 * Return: el numero de bit escritos o 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t leidos, escritos, bits_a_leer, contador = 0;
	int r;
	char buf[1024];

	if (filename == NULL)
		return (0);
	r = open(filename, O_RDONLY);
	if (r == -1)
		return (0);
	while (contador < letters)
	{
		if (letters - contador > sizeof(buf))
		{
			bits_a_leer = sizeof(buf);
		}
		else
		{
			bits_a_leer = letters - contador;
		}
		leidos = read(r, buf, bits_a_leer);
		if ((ssize_t)leidos == -1)
		{
			close(r);
			return (0);
		}
		if (leidos == 0)
			break;
		escritos = write(STDOUT_FILENO, buf, leidos);
		if (((ssize_t)escritos == -1) || ((size_t)escritos != (size_t)leidos))
		{
			close(r);
			return (0);
		}
		contador += escritos;
	}
	close(r);
	return (contador);
}
