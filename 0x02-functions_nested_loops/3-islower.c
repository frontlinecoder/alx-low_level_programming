#include <stdio.h>

/**
 * _islower - function that checks for lowercase character.
 *
 *@c: Value to be compared
 *Return: 0 if succesful.
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)

		return (1);

	else

		return (0);

}

