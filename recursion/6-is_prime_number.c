#include "main.h"

/**
 * prime_helper - Fonction auxiliaire pour trouver les nombre primaire
 * @n: Le nombre dont on veut savoir si c'est primaire
 * @guess: La tentative actuelle pour pour trouver un divisible
 * Return: 1 si la nombre est primaire, ou -1 sinon
 */
int prime_helper(int n, int guess)
{
if (n == 1)
	return (0);
if (guess < n)
{
if (n % guess == 0)
	return (0);
return (prime_helper(n, guess + 1));
}
return (1);
}

/**
 * is_prime_number - Reconnaitre les nombres primaires
 * @n: Le nombre dont on veut savoir s'il est primaire
 * Return: 1 si c'est primaire, ou -1 sinon
 */
int is_prime_number(int n)
{
if (n < 0)
	return (0);
return (prime_helper(n, 2));
}
