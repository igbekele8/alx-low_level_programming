#include <stdio.h>

/**
 * main - Program that prints single base 10 digits from 0, then a new line
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
