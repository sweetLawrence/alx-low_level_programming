#include <stdio.h>

/**
 * main - 0 to 10
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
