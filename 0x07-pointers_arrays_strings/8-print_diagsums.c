#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - diagonal sum
 * @a: inp 1
 * @size: sizeInput
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int first_sum, second_sum, init;

	first_sum = 0;
	second_sum = 0;

	for (init = 0; init < size; init++)
	{
		first_sum = first_sum + a[init * size + init];
	}

	for (init = size - 1; init >= 0; init--)
	{
		second_sum += a[init * size + (size - init - 1)];
	}

	printf("%d, %d\n", first_sum, second_sum);
}
