#include "main.h"

/**
 * _isalpha - check for alphabetic character if lowercase or uppercase
 * @c: check if lowercase of uppercase
 * Return: 0 if successfull, 1 if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

