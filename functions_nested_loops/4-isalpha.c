#include "main.h"
/**
 * _islower - Vérifie si un caractère est en minuscule ou un majuscule 
 * @c: Le caractère à vérifier
 *
 * Return: 1 si le caractère est une lettre minuscule ou majuscule , 0 sinon
 */
int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
