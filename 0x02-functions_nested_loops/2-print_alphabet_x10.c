#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 */

void print_alphabet_x10(void)
{
	int a;
	char ch;

	a = 0;

	while (a < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		a++;
	}
}
