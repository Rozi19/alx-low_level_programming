#include <stdio.h>
/**
 * main- print "all possible different combinations of three digits
 * Return: always zero
 */
int main(void)
{
	int x, y, z;

	/**
	 * for loop use to x start from 0 to 7
	 * for loop use for y start from x+1 to 8
	 * for loop use for z start from y=1 to 9
	 * putchar print our three digits number
	 */
	for (x = 0 ; x <= 7 ; x++)
		for (y = x + 1 ; y <= 8 ; y++)
			for (z = y + 1 ; z <= 9 ; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
