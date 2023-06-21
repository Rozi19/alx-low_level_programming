#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: always zero
 */
int main(void)
{
	int c;
	long int f = 1, s = 2;
	long int n = f + s;

	printf("%lu, ", f);
	printf("%lu, ", s);
	/**
	 * for c strat from 3 to 50
	 * if c equl to 50 print space
	 * else if comma and c
	 */
	for (c = 3; c <= 50; c++)
	{
		if (c == 50)
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
