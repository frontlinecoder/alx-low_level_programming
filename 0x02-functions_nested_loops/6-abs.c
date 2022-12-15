#include <stdio.h>

/**
 * _abs - absolute value of an integer.
 *
 * @n: The int to be operated.
 *
 * Return: returns an unsigneed int value.
 */

int _abs(int n)

{

	if (n > 0)

	{

		return (n);

	}

	else

	{

		n *= -1;

		return (n);

	}

}


