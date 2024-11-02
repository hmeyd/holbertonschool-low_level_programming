#include "main.h"
/**
 * reverse_array - prints a string in reverse
 *
 * @a: l'array à afficher en sens inverse
 * @n: nmbre d'element
 * void
 */
void reverse_array(int *a, int n)
{
int i = 0, sit;
while (i < n / 2)
{
sit = a[n - i - 1];
a[n - i - 1] = a[i];
a[i] = sit;
i++;
}
}
