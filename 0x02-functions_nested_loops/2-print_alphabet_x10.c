#include <stdio.h>

/**
 * print - alphabet_x10.c - Print 10 times the alphabet.
 *
 */
void print_alphabet_x10(void)

{

	int i;

	char j;

	for (i = 0; i < 10; i++)

	{

		for (j = 'a'; j <= 'z'; j++)

		{

			putchar(j);

		}

		putchar('\n');

	}

}

