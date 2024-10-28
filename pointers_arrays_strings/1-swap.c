#include "main.h"
/**
 * swap_int - echange la valeur de ses deux parametres
 * @a: le permiere parametre à echangé
 * @b: le deuxieme parametre à echangé
 * void
 */
void swap_int(int *a, int *b)
{
int d;
d = *a;
*a = *b;
*b = d;
}
