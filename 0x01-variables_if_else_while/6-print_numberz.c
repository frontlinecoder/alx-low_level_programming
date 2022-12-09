#include <stdio.h>

/**
 * main - Prints digit numbers without a char variable.
 *
 * Return: always 0.
 */
int main(void)
{

int num;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');

return (0);

}
