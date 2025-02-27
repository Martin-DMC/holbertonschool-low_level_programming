/**
 * _strcmp - compara cadenas
 * @s1: cadena 1
 * @s2: cadena 2
 *
 * Return: retorna valor
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, v = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			v = 1;
		}
		else
		{
			v = 0;
			break;
		}
		i++;
		j++;
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i < j)
	{
		return (15);
	}
	else if (i > j)
	{
		return (-15);
	}
	else if (v == 1)
	{
		return (0);
	}
	else
	{
		return (4);
	}
}
