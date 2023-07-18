#include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
		putchar((num % 16 < 10) ? (num % 16 + '0') : (num % 16 - 10 + 'a'));
	putchar('\n');

	return (0);
}
