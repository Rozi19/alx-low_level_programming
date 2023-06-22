#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * @c: pass the value
 * Return: the value
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		_putchar(c + '0');
		_putchar(':' + '0');
		_putchar(' ');
		_putchar('1' + '0');
	}
	else
	{
		_putchar(c + '0');
		_putchar(':' + '0');
		_putchar(' ');
		_putchar('0' + '0');
	}
	return (c);
}

