#include <stdlib.h>
/**
 * len - cuenta el largo de la cadena
 * @s: puntero a texto
 *
 * Return: largo
 */
int len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * str_concat - concatena dos cadenas en un nuevo puntero
 * @s1: 1er cadena
 * @s2: 2da cadena
 *
 * Return: puntero a la cadena o NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, l1, l2;
	char *cadena;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = len(s1);
	l2 = len(s2);

	cadena = (char *)malloc((l1 + l2 + 1) * sizeof(char));

	if (cadena == NULL)
		return (NULL);

	for (i = 0; i <= l1; i++)
	{
		cadena[i] = s1[i];
	}
	for (i = 0; i <= l2; i++)
	{
		cadena[l1 + i] = s2[i];
	}
	cadena[l1 + l2] = '\0';

	return (cadena);
}
