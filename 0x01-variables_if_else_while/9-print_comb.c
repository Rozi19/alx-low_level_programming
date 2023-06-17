#include <stdio.h>
/**
 * main- print " all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int n;

	/**
	 * for loop start with 0 to 9
	 * putchar to print n
	 */
	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		if  (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
