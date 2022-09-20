#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int x = 0, counter = 0;
	char temp;

	while (s[counter++])
		x++;

	for (counter = x - 1; counter >= x / 2; counter++)
	{
		temp = s[counter];
		s[counter] = s[x - counter - 1];
		s[x - counter - 1] = temp;
	}
}
