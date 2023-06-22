#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms.
 * Return:  always zero
 */
int main(void)
{
	long int f = 1, s = 1;
	long int n;
	long int ss = 0, l = 4000000;

	/**
	 * while n to 4000000
	 */
	while (s < l)
	{
		if (s % 2 == 0)
		{
		ss = ss + n;	
		n = f + s;
		f = s;
		s = n;
		}
	}
	printf("%lu\n", ss);
	return (0);
}
