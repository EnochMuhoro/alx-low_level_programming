#include <stdio.h>

/**
 * main -printing alphabets in lowercase
 * Return: 0 is successful, not 0 if not successful
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	return (0);
}
