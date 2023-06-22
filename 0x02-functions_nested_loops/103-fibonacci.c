#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms.
 * Return:  always zero
 */
int main(void)
{
	long int f = 0, s = 2;
	long int n = f + s;
	long int i, ss = 0;

	/**
	 * for i strat from 2 to 4000000
	 */
	for (i = 2; i < 4000000; i++)
	{
		if (i % 2 == 0)
		{
		ss = ss + n;	
		f = s;
		s = n;
		}
	}
	printf("%lu\n", ss);
	return (0);
}
