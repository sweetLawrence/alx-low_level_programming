#include "main.h"

/**
 * set_string - it refs the value of a pointer to a character
 * @s: a pointer to a pointer
 * @to: a pointer character
 */

void set_string(char **s, char *to)
{
	*s = to;
}
