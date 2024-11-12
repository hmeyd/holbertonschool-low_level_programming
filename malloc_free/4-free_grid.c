#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - fonction qui diplique
 * @s1: 1er le chaine de caractaire à concatiner
 * @s2: 2eme chaine de caractaire à concatiner
 * Return: le chaine de caractaire concatiner
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
	free(grid);
	}
}
