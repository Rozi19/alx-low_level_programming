#include <stdio.h>
/**
 * main - the first 98 Fibonacci numbers, starting with 1 and 2.
 * Return: always zero
 */
int main(void)
{
	long int c;
	long int f = 1, s = 2;
	long int n = f + s;

	printf("%lu, ", f);
	printf("%lu, ", s);
	/**
	 * for c start 3 to 98
	 * if c 98 print n
	 * else print n and ,
	 */
	for (c = 3; c <= 98; c++)
	{
		if (c == 98)
		{
			printf("%lu\n", n);
		}
		else
		{
			printf("%lu, ", n);
		}
		f = s;
		s = n;
		n = f + s;
	}
	return (0);
}
