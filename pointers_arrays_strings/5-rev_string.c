/**
 * len - contador de caracteres
 * @s: puntero
 *
 * Return: devuelve la cantidad
 */
int len(char *s)
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
/**
 * rev_string - invierte cadena
 * @s: puntero
 *
 * Description: imprime una cadena invertida
 */

void rev_string(char *s)
{
	int i, j;
	char cambio;
	int largo = len(s);

	for (i = 0, j = largo - 1; i < j; i++, j--)
	{
		cambio = s[i];
		s[i] = s[j];
		s[j] = cambio;
	}
}
