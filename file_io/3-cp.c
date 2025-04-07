#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * copiar_text - recibe dos descriptores de archivos y los copia
 * @a: descriptor archivo origen
 * @b: descriptor archivo destino
 * @name: nombre archivo original
 *
 * Return: siempre 0
 */
int copiar_text(int a, int b, char *name)
{
	char buffer[1024];
	int leidos, escritos;

	while (1)
	{
		leidos = read(a, buffer, sizeof(buffer));
		if (leidos == -1)
		{
			dprintf(2, "Error: Can't read from fd %s\n", name);
			close(a);
			close(b);
			exit(98);
		}
		if (leidos == 0)
			break;
		
		escritos = write(b, buffer, leidos);
		if (escritos == -1)
		{
			dprintf(2, "Error: Can't write to fd %d\n", b);
			close(a);
			close(b);
			exit(99);
		}
	}
	return (0);
}
/**
 * _strcmp - toma dos texto y los compara para saber si son iguales
 * @s1: puntero al primer texto
 * @s2: puntero al segundo texto
 *
 * Return: 0 si son iguales
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
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
	if (_strcmp(argv[1], argv[2]) == 0)
	{
		dprintf(2, "Error: Input and output file can't be the same\n");
		exit(98);
	}
	archivo = open(argv[1], O_RDONLY);
	if (archivo == -1)
	{
		dprintf(1, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	destino = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destino == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(archivo);
		exit(99);
	}
	copiar_text(archivo, destino, argv[1]);
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
