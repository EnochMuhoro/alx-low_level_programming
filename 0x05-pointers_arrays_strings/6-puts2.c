#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string to print
 */
void puts2(char *str)
{
	int x = 0;
	while (*(str + x))
	{
		_putchar(*(str + x));
		x = x + 2;
	}
	_putchar('\n');
}
