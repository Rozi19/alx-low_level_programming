#include <stdio.h>
/**
 * main- print "all possible combinations of two two-digit numbers.
 * Return: always zero
 */
int main(void)
{
	int x, y, n, m;

	/**
	 * for loop x strat from 0 to 9
	 * for loop y start from 0 to 8
	 */
	for(x = 0 ; x <= 9 ; x++)
		for(y = 0 ; y <= 8 ; y++)
			putchar(x + '0');
	putchar(y + '0');
	return (0);
}
