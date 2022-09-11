#include <stdio.h>

/**
 * main - printing lowercase and uppercase
 * Return: 0 if successful, not 0 if not successfull
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
