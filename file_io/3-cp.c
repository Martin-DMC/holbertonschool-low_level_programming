#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * copiar_text - recibe dos descriptores de archivos y los copia
 * @a: descriptor archivo origen
 * @b: descriptor archivo destino
 *
 * Return: siempre 0
 */
int copiar_text(int a, int b)
{
	char buffer[1024];
	int leidos, escritos;

	while ((leidos = read(a, buffer, sizeof(buffer))) > 0)
	{
		escritos = write(b, buffer, leidos);
		if (escritos == -1)
		{
			dprintf(2, "Error: Can't write to fd %d\n", b);
			close(a);
			close(b);
			exit(99);
		}
	}
	if (leidos == -1)
	{
		dprintf(2, "Error: can't read from fd %d\n", a);
		close(a);
		close(b);
		exit(98);
	}
	return (0);
}
/**
 * main - recibe dos archivos y copia el origen al destino
 * @argc: cantidad de archivos
 * @argv: array que contiene los archivos
 *
 * Return: siempre 0
 */
int main(int argc, char *argv[])
{
	int archivo, destino;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	archivo = open(argv[1], O_RDONLY);
	if (archivo == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	destino = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destino == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(archivo);
		exit(99);
	}
	copiar_text(archivo, destino);
	if  (close(archivo) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", archivo);
		exit(100);
	}
	if (close(destino) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", destino);
		exit(100);
	}
	return (0);
}
