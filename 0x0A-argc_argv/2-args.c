#include <stdio.h>
#include "main.h"

/**
 * main - print args received
 * @argc: num of args
 * @argv: list of args
 *
 * Return: 0 all time
 */
int main(int argc, char *argv[])
{
	int iter;

	for (iter = 0; iter < argc; iter++)
	{
		printf("%s\n", argv[iter]);
	}
	return (0);
}
