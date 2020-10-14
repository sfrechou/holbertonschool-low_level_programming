#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: s
 * @height: s
 *
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
int **array, i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}
array = (int **)malloc(height * sizeof(int));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
array[i] = (int *)malloc(width * sizeof(int));
if (array == NULL)
{
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
array[i][j] = 0;
}
}
return (array);
}
