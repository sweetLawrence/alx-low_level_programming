#include "main.h"
/**
 * _strstr - extract substr if success
 * @haystack: word
 * @needle: subst
 * Return: aways 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *word = haystack;
		char *substr = needle;

		while (*word == *substr && *substr != '\0')
		{
			word++;
			substr++;
		}

		if (*substr == '\0')
			return (haystack);
	}

	return (0);
}
