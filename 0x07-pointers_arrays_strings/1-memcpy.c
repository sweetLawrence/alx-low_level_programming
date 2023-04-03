#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory for stored
 *@src: memory  for copied
 *@n: number of iterations
 *
 *Return: copied memory with n iterations
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index = 0;
	int i = n;

	for (; index < i; index++)
	{
		dest[index] = src[index];
		n--;
	}
	return (dest);
}
