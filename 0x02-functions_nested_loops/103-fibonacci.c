#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms.
 * Return:  always zero
 */
int main(void)
{
	long long int f = 0, s = 2;
	long long int n = f + s;
	long long int i, ss;

	/**
	 * for i strat from 2 to 4000000
	 */
	for (i = 2; i <= 4000000; i++)
	{
		ss = 4 * s + f;
		f = s;
		s = ss;
		n += s;
	}
	printf("%llu\n", n);
}	

