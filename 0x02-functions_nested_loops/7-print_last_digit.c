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
	
	/* if c is lessthan 0 c change into postive number*/
	if (c < 0)
	{
		c = -(c);
		r = c % 10;
	}
	else
		r = c % 10;
	_putchar(r + '0');
	return (r);
}
