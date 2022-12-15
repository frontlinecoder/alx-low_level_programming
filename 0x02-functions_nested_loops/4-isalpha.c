#include <stdio.h>

/**
 *_isalpha - Return 1 if c is a letter. lowercase or uppercase.
 * 
 *Return: 1 if it’s a lowercase or uppercase.
 *
 */

int _isalpha(int c)

{

	if (c >= 65 && c <= 122)

		return (1);

	else

		return (0);

}


