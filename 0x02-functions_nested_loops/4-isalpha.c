#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: pass the value
 * Return: value 0 or 1
 */
int _isalpha(int c)
{
	int r;

	/**
	 * if c is alpha print 1
	 * else print 0
	 */
	if (isalpha(c) == 0)
		r = 0;
	else
		r = 1;
	return (r);
}
