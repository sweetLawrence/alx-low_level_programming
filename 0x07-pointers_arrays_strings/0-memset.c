#include "main.h"

/**
 * _memset - fills memory block with specific constant value
 * @s: staring address of memory to be filled
 * @b: the constant to be filled
 * @n: number of bytes to iterate over
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for(unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}
