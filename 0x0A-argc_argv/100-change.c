#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of silvers to
 * make change for an amount of money
 * @argc: num of args
 * @argv: list of args
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, j, answer;
	int silvers[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	answer = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= silvers[j])
		{
			answer++;
			num -= silvers[j];
		}
	}

	printf("%d\n", answer);
	return (0);
}

