#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - crea, escribe o trunca un archivo
 * @filename: numbre del archivo
 * @text_content: contenido a escribir
 *
 * Return: 1 o -1 si falla
 */
int create_file(const char *filename, char *text_content)
{
	int archivo, escritos, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		archivo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (archivo == -1)
			return (-1);
		close(archivo);
		return (1);
	}
	else
	{
		archivo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (archivo == -1)
			return (-1);
		while (text_content[i] != '\0')
		{
			escritos = write(archivo, text_content + i, 1);
			if (escritos == -1)
			{
				close(archivo);
				return (-1);
			}
			i++;
		}
		close(archivo);
		return (1);
	}
	return (-1);
}
