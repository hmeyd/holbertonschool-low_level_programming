#include "main.h"
/**
*islower -Entry point
*Return: void
*/
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return(1);
	else
		return (0);
}
