#include<stdlib.h>
/**
 * cont_palabras - cuenta las palabras que hay en un texto
 * @str: puntero al texto
 *
 * Return: cantidad de palabras
 */
int cont_palabras(char *str)
{
	int i = 0, contador = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			contador += 1;
		i++;
	}
	return (contador);
}
/**
 * cont_letras - cuenta las letras de una palabras
 * @str: puntero a texto
 * @i: altura donde empieza la palabra
 *
 * Return: cantidad de letras
 */
int cont_letras(char *str, int i)
{
	int l_palabra = 0;

	while (str[i] != ' ' && str[i] != '\0')
	{
		l_palabra++;
		i++;
	}

	return (l_palabra);
}
/**
 * strtow - Divide una cadena en palabras y devuelve un array de punteros
 * @str: Cadena a dividir
 *
 * Return: Puntero a array de palabras, o NULL en caso de error
 */
char **strtow(char *str)
{
	char **a;
	int pos = 0, i = 0, l_palabra, k;

	if (str == NULL || str[0] == '\0' || cont_palabras(str) == 0)
		return (NULL);

	a = (char **)malloc((cont_palabras(str) + 1) * sizeof(char *));
	if (a == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			l_palabra = cont_letras(str, i);

			a[pos] = (char *)malloc((l_palabra + 1) * sizeof(char));
			if (a[pos] == NULL)
			{
				while (pos > 0)
					free(a[--pos]);
				free(a);
				return (NULL);
			}
			for (k = 0; k < cont_letras(str, i); k++)
				a[pos][k] = str[i + k];
			a[pos][k] = '\0';

			pos++;
			i += l_palabra;
		}
		else
			i++;
	}
	a[pos] = NULL;
	return (a);
}
