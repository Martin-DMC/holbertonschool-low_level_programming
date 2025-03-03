/**
 * _memcpy - copia arrays
 * @dest: destino
 * @src: contenido
 * @n: cantidad
 *
 * Return: retorna puntero
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *r = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (r);
}
