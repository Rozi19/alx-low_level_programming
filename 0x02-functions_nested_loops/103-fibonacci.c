#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms.
 * Return:  always zero
 */
int main(void)
{
	long int f = 1, s = 1;
	long int n = f + s;
	long int ss = 0, l = 4000000;

	/**
	 * while n to 4000000
	 */
	while (n < l)
	{
		if (n % 2 == 0)
		{
		ss = ss + n;	
		f = s;
		s = n;
		n = f + s;
		}
	}
	printf("%lu\n", ss);
	return (0);
}
