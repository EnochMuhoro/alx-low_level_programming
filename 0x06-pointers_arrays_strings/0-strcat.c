#include "main.h"

/**
 * _strcat - appends the src to the dest string
 * @dest: string to be appended by src
 * @src: string to append to dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;
	x = y = 0;

	while (*(dest + x))
	{
		x++;
	}
	while ((*(dest + x) = *(src + y)))
	{
		x++;
		y++;
	}
	return (dest);
}
