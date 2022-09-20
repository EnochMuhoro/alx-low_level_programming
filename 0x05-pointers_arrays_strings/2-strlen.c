#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string to get the length
 * Return: return the length of a string
 */
int _strlen(char *s)
{
	size_t x = 0;

	while (*s++)
		x++;
	return (x);
}
