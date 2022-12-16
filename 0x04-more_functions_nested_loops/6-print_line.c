#include <stdio.h>

/**
 * print_line - prints line
 * @n: parameter
 */

void print_line(int n)

{
	int i = 1;

	while (i <=  n)
	{
		putchar(95);

		i++;
	}
	putchar('\n');
}
