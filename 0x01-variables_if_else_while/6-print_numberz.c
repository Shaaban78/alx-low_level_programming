#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
