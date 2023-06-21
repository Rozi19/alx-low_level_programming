#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: pass the value
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n >=0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				p = i * j;
				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar((p % 100 / 10) + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');

		}
		_putchar('\n');
	}
}

