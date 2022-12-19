#include <stdio.h>

/**
* swap_int - a function that swaps the values of two integers.
*
* @a: first value
*
* @b: Second parameter
*
* int c: address the swapped value will be sent to
*
* Return: Always 0
*/

void swap_int(int *a, int *b)

{

	int c = *a;

	*a = *b;

	*b = c;

}
