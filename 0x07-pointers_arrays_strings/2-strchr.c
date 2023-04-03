#include "main.h"
/**
 *_strchr - a function that locates a char in string
 *@s: string for search
 *@c: character for search
 *
 *Return: pointer fo 1st occ of c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		if (s[i] != c)
		{
			return (NULL);
		}
		i++;
	}
	return (0);
}
