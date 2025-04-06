#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - agrega texto al final del contenido si existe el file
 * @filename: nombre del archivo
 * @text_content: contenido a agregar
 *
 * Return: 1 o -1 si falla
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int archivo, escrito, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		archivo = open(filename, O_WRONLY);
		if (archivo == -1)
			return (-1);
		close(archivo);
		return (1);
	}
	else
	{
		archivo = open(filename, O_WRONLY | O_APPEND);
		if (archivo == -1)
			return (-1);
		while (text_content[i] != '\0')
		{
			escrito = write(archivo, text_content + i, 1);
			if (escrito == -1)
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
