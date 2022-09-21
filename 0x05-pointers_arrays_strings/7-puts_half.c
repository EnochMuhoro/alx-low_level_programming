#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed into half
 */
void puts_half(char *str)
{
	int x, y =0;
	while (*(str + x))
	{
		x++;
	}
	y = x / 2;
	if (x % 2)
	{
		y += 1;
	}
	while (y < x)
	{
		_putchar(*(str + y));
		y++;
	}
	_putchar('\n');
}
