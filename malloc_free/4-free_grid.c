#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - fonction qui libere l'espace
 * @grid: le tableau
 * @height: le dimenssion du tableau
 * Void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
	free(grid);
	}
}
