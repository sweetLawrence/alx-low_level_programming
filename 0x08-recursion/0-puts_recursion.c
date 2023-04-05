#include "main.h"
/**
 * _puts_recursion - print string recursively
 * @s: str input
 * Return: 0 always
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
