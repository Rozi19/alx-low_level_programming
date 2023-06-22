#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    /**
     * if check a larger than b & c and b larger than c
     * else if check b
     * else if check a larger than c & b and c larger than b
     * else if check c
     */
    if (a > b && b > c)
    {
	    largest = a;
    }
    else if (b > a && a > c)
    {
	    largest = b;
    }
    else if (a > c && c > b)
    {
	    largest = a;
    }
    else if (b > c && c > a)
    {
	    largest = b;
    }
    else if (c > a && a > b)
    {
	    largest = c;
    }
    else
    {
	    largest = c;
    }

    return (largest);
}
