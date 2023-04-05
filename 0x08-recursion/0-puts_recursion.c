#include "main.h"
/**
 * _puts_recursion - print string recursively
 * @s: str input
 * Return: 0 always
 */
void _puts_recursion(char *s)
{
	char first_char = *s;

	if (first_char)
	{
		_putchar(first_char);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
