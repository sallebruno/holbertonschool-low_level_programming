#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: First integer to swap.
 * @b: Second integer to swap.
 */

void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
