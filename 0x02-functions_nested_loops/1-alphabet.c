#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check code
 * Return: no return
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

/**
 * main - check code
 * Return: always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
