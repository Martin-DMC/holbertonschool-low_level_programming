/**
 * ult_char - devuelve puntero a ult caracter
 * @s: puntero a recorrer
 *
 * Return: retorna puntero
 */
char *ult_char(char *s)
{
	if (*s == '\0')
	{
		return (s - 1);
	}

	return (ult_char(s + 1));
}
/**
 * verificacion - verifica si es palindrome
 * @i: inicio
 * @f: final
 *
 * Return: si 1, no 0
 */
int verificacion(char *i, char *f)
{
	if (i >= f)
	{
		return (1);
	}
	if (*i != *f)
	{
		return (0);
	}
	return (verificacion(i + 1, f - 1));
}

/**
 * is_palindrome - verifica palabras palndromes
 * @s: puntero
 *
 * Return: 1 palindrome, 0 no palindrome
 */

int is_palindrome(char *s)
{
	char *fin = ult_char(s);

	return (verificacion(s, fin));
}
