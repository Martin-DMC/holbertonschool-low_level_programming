/**
 * swap_int - intercambia valores
 * @a: numero
 * @b: numero
 *
 * Description: intercambia los valores indicados
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	int cambio = *a;
	*a = *b;
	*b = cambio;
}
