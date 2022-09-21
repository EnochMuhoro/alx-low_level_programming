#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * @src: string to be copied
 * @dest: destination to be copied
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';
	return (dest);
}
