#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 *
 * @width: width input
 *
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **m_lock;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	m_lock = malloc(sizeof(int *) * height);
	if (m_lock == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		m_lock[x] = malloc(sizeof(int) * width);
		if (m_lock[x] == NULL)
		{
			for (; x >= 0; x--)
				free(m_lock[x]);
			free(m_lock);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			m_lock[x][y] = 0;
	}
	return (m_lock);
}
