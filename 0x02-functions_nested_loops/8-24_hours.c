#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 *
 *Return: Always 0.
 */

void jack_bauer(void)

{

	int a;

	int b;

	for (a = 0; a <= 23; a++)

	{

		for (b = 0; b <= 59; b++)

		{

			putchar (a / 10 + '0');

			putchar (a % 10 + '0');

			putchar (':');

			putchar (b / 10 + '0');

			putchar (b % 10 + '0');

			putchar ('\n');

		}

	}

}


