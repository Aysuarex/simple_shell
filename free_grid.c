#include "shell.h"
/**
 *free_grid - Free the allocated memory used in the last excercise
 *@grid: pointer to grid
 *@heigth: Heigth of the grid
 */

void free_grid(char **grid, int heigth)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	while (i < heigth)
	{
		free(grid[i]);
		i++;
	}
}
