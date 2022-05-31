#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional pay of integers..
 *
 * @width: parameter 1
 * @height: parameter 2
 * Return: pointer.
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **p;

if (height <= 0 || width <= 0)
return (NULL);

p = malloc(sizeof(int *) * height);

if (p == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
p[i] = malloc(sizeof(int) * width);
if (p[i] == NULL)
{
free(p);
for (j = 0; j <= i; j++)
free(p[j]);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
p[i][j] = 0;
}
}

return (p);
}
