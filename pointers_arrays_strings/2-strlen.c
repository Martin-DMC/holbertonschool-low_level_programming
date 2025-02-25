/**
 * _strlen - cuenta caracteres
 * @s: cadena
 *
 * Description: cuenta una cadena de caracteres
 *
 * Return: cantidad de caracteres
 */

int _strlen(char *s)
{
	int i = 0;
	int contador = 0;

	while (s[i] != '\0')
	{
		contador += 1;
		i++;
	}

	return (contador);
}
