#include <stdio.h>

/**
* print_array - function to print n elements of array of integers
*
* @a: first parameter
*
* @n: second parameter
*
* Return: Always 0
*/

void print_array(int *a, int n)

{

	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
