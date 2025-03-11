#include <stdlib.h>
/**
 * len - cuenta el largo de la cadena
 * @s: cadena
 *
 * Return: largo de cadena
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
 * string_nconcat - concatena n bytes de dos cadenas
 * @s1: 1er cadena
 * @s2: 2da cadena
 * @n: cantidad de bytes
 *
 * Return: puntero a cadena concatenada
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cadena;
	unsigned int i, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = len(s1);
	l2 = len(s2);

	if (n >= l2)
		n = l2;

	cadena = malloc(l1 + l2 + 1);
	if (cadena == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		cadena[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		cadena[l1 + i] = s2[i];
	}
	cadena[l1 + n] = '\0';

	return (cadena);
}
