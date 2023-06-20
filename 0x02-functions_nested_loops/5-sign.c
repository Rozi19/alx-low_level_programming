#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: pass the value
 * Return: the value
 */
int print_sign(int n)
{
	int r;

	/**
	 * if n greter than 0 print + and 1
	 * else if n lessthan 0 print - and -1 or /
	 * else print 0 and 0
	 */
	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}

