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
	 * for loop n start from 0 t0 9
	 * for loop m start from 1 to 9
	 */
	for(x = 0 ; x <= 9 ; x++)
		for(y = 0 ; y <= 8 ; y++)
		{
			for(n = 0 ; n <= 9 ; n++)
			{
				for(m = 0 ; m <= 9 ; m++)
				{
					if(n == 0)
						m = y+1;
					putchar(x + '0');
					putchar(y + '0');
					putchar(' ');
					putchar(n + '0');
					putchar(m + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
