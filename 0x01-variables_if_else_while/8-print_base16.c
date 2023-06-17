#include <stdio.h>
/**
 * main- print "all the numbers of base 16 in lowercase, followed by a new line
 * Return: always zero
 */
int main(void)
{
	int n;

	/*for loop n strat with 0 to f by hexadecimal*/
	for (n = 0 ; n < 16; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
