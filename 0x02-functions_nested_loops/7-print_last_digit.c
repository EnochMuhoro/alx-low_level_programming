#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the number to extract the last digit
 * Return: the last digit of a number
 */

int print_last_digit(int i)
{
	int x;

	if (i < 0)
	{
		i = -i;
	}
	x = i % 10;
	if (x < 0)
	{
		x = -x;
	}
	_putchar(x + '0');

	return (x);
}
