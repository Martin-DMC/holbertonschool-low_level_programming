#include <stdlib.h>
/**
 * argstostr - copia los valores de av en un texto unico
 * @ac: cantidad
 * @av: valores
 *
 * Return: puntero al nuevo texto
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, len = 0, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}
	a = (char *)malloc((len + ac + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			a[pos++] = av[i][j];
		}
		a[pos++] = '\n';
	}
	a[pos] = '\0';

	return (a);
}
