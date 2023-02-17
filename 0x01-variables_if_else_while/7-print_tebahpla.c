#include <stdio.h>

/**
 * main - Program that prints alphabet lowercase in reverse form and a new line
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
