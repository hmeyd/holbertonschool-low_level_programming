#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a character in a string
 * @haystack: the string
 * @needle: le charcteur à localiser
 *
 * Return: first occurrence of the character c in the string s, or NULL
 */
void print_chessboard(char (*a)[8])
{
int i, j;
char *b = "rkbqkbkr";
for (i = 0; i <= 7; i++)
{
        for (j = 0; j <= 7; j++)
        {
                if (i == 0)
                        a[i][j] = b[j];
		else if (i == 1)
			a[i][j] = 'p';
		else if (i == 6)
			a[i][j] = 'P';
		else if (i == 7)
			a[i][j] = b[j] -32;
		else
			a[i][j] = ' ';
		_putchar(a[i][j]);
	}
	_putchar('\n');
}
}

