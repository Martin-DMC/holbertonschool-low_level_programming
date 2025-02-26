/**
 * _strcpy - copia cadena
 * @dest: destino
 * @src: original
 *
 * Description: copia la cadena de un puntero
 *
 * Return: el puntero de dest
 */

char *_strcpy(char *dest, char *src)
{
	char *r = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (r);
}
