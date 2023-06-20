#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit -  prints the last digit of a number.
 * @c: pass the value
 * Return: the value r
 */
int print_last_digit(int c)
{
	int r;
	
	c = abs(c);
	r = c % 10;
	_putchar(r + '0');
	return (r);
}
