#include "main.h"
/**
 * _strspn - function to check
 * @s: string input
 * @accept: string to be checked
 * Return: counted occurences
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt = 0;
	int iter;

	while (*s)
	{
		for (iter = 0; accept[iter]; iter++)
		{
			if (*s == accept[iter])
			{
				cnt++;
				break;
			}
			else if (accept[iter + 1] == '\0')
				return (cnt);
		}
		s++;
	}
	return (cnt);
}
