#include <stdlib.h>
/**
 * _strdup - copia una cadena
 * @str: cadena original
 *
 * Return: puntero a la copia o NULL
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *copia;

	while (str[len] != '\0')
	{
		len++;
	}

	copia = (char *)malloc((len + 1) * sizeof(char));

	if (copia == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		copia[i] = str[i];
	}

	return (copia);
}
