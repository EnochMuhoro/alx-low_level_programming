#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int x = 0, y = 0;
	char chr[1000];

	while (*(s + x))
	{
		*(chr + x) = *(s + x);
		x++;
	}
	x = x - 1;
	while (x >= 0)
	{
		*(s + x) = *(chr + y);
		y++;
		x--;
	}
}
