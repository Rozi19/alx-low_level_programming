#include "main.h"
/**
 * _islower - checks for lowercase character
 * c - is the value if it's lowercase or not
 * Return: 1 if c is lowercase else print 0
 */
int _islower(int c)
{
	int r;

	/**
	 * if c is lowercase print 1
	 * else print 0
	 */
	if (c >= 'a' && c <= 'z')
		r = 1;
	else
		r = 0;
	return r;
}
