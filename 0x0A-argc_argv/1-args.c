#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of args passed
 * @argc: num of args
 * @argv: list of args
 *
 * Return: A0 all time
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
