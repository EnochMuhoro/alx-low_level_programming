#include "main.h"

/**
 * swap_int - swap the values for two integers
 * @a: swap to b
 * @b: swap to a
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

