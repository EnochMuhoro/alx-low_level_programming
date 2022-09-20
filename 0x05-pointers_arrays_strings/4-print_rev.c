#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int x;
	int counter;
	x = 0;

	while (s[counter++])
		x++;

	for (counter = x - 1; counter >= 0; counter--)
		_putchar(s[counter]);

	_putchar('\n');
}
