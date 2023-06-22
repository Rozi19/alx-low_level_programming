#include <stdio.h>
/**
 * main - the first 98 Fibonacci numbers, starting with 1 and 2.
 * Return: always zero
 */
int main(void)
{
	long int c;
	unsigned long f = 1, s = 2;
	unsigned long n = f + s;
	unsigned long fh1, fh2, sh1, sh2;
	unsigned long h1, h2;

	printf("%lu, ", f);
	printf("%lu, ", s);
	/**
	 * for c start 3 to 98
	 * if c 98 print n
	 * else print n and ,
	 */
	for (c = 3; c < 92; c++)
	{
		printf("%lu, ", n);
		f = s;
		s = n;
		n = f + s;
	}
	fh1 = f / 10000000000;
	sh1 = s / 10000000000;
	fh2 = f % 10000000000;
	sh2 = s % 10000000000;
	for (c = 93; c < 99; c++)
	{
		h1 = fh1 + sh1;
		h2 = fh2 + sh2;
		if (fh2 + sh2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (c < 98)
			printf(", ");
		fh1 = sh1;
		fh2 = sh2;
		sh1 = h1;
		sh2 = h2;
	}
	printf("\n");
	return (0);
}
