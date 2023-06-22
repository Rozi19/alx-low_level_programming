#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: pass the value
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		_putchar('\\');
		for (i = 1; i <= n; i++)
		{
			if (i >1)
			{
				for (j = 1; j < i; j++)
					_putchar(' ');
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
