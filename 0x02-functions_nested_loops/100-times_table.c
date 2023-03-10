#include "main.h"
/**
 * print_times_table - prints all minutes
 * Return: void
 * @t: times to print the table
 */
void print_times_table(int t)
{
	int i, j;

	if (t > 15 || t < 0)
		return;
	for (i = 0; i <= t; i++)
	{
		for (j = 0; j <= t; j++)
		{
			int n = j * i;

			int n1 = (n / 100) % 10;

			int n2 = (n / 10) % 10;

			int n3 = n % 10;

			if (n < 10)
			{
				if (j != 0)
				{
					put_spaces(3);
				}
				_putchar(48 + n);
			} else if (n < 100)
			{
				put_spaces(2);
				_putchar(48 + n2);
				_putchar(48 + n3);
			} else if (n < 1000)
			{
				_putchar(' ');
				_putchar(48 + n1);
				_putchar(48 + n2);
				_putchar(48 + n3);
			}
			if (j != t)
				_putchar(',');
		}
		_putchar('\n');
	}
}
/**
 * put_spaces - Prints n spaces
 * @n: the amount of spaces
 */
void put_spaces(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(' ');
}
