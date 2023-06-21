#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: pass the value
 * Return: the value
 */
void print_to_98(int n)
{
	int i;

	/**
	 * if n greater than 98
	 * for i from n to 98
	 */
	for (i = n; i <= 98; i++)
	{
		if (i >= 9)
			_putchar(' ');
		if (i <= 99 && i >= 10)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
