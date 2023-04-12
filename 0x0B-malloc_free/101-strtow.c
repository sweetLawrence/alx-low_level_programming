#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 *Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 *
 * or NULL (Error)
 *
 */
char **strtow(char *str)
{
	char **the_matrik, *temporary;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	the_matrik = (char **) malloc(sizeof(char *) * (words + 1));
	if (the_matrik == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temporary = (char *) malloc(sizeof(char) * (c + 1));
				if (temporary == NULL)
					return (NULL);
				while (start < end)
					*temporary++ = str[start++];
				*temporary = '\0';
				the_matrik[k] = temporary - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	the_matrik[k] = NULL;
	return (the_matrik);
}
