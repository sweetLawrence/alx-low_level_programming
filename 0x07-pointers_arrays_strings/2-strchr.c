#include "main.h"
/**
 * _strchr - function
 * @s: string input
 * @c: char input
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	for (; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (&s[index]);
	}
	return (0);
}
