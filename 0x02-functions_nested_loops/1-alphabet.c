#include "main.h"

/**
 * main - prints alphabets in lowercase and a new line
 * Retun: 0 if successfull
 */

void print_alphabet(void)
{
	char ch;

	ch ='a';

	while (ch <='z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
