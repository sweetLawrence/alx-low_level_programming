#include "main.h"
/**
 * _strpbrk - function check
 * @s: str input
 * @accept: check str
 * Return: Aanswer
 */
char *_strpbrk(char *s, char *accept)
{
		int iter;

		while (*s)
		{
			for (iter = 0; accept[iter]; iter++)
			{
			if (*s == accept[iter])
			return (s);
			}
		s++;
		}

	return ('\0');
}
