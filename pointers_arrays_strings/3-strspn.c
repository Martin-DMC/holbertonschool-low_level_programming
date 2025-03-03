/**
 * _strspn - devuelve cantidad de caracteres iguales
 * @s: puntero
 * @accept: puntero
 *
 * Return: cantidad de caracteres
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int contador = 0;
	int stop = 1;

	while (s[i] && stop == 1)
	{
		j = 0;
		stop = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				contador += 1;
				stop = 1;
			}
			j++;
		}
		i++;
	}
	return (contador);
}
