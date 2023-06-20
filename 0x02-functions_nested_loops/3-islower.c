#include "main.h"
/**
 * _islower - checks for lowercase character
 */
int _islower(int c)
{
	/** 
	 * if c is lowercase print 1
	 * else print 0
	 */
	if (c >= 'a' && c <= 'z')
		_putchar('1');
	else
		_putchar('0');
}
