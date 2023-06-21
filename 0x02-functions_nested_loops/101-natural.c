#include <stdio.h>
/**
 * main - print prints the sum of all the multiples of 3 or 5 below 1024
 * Return: always zero
 */
int main (void)
{
	int i;
	int s = 0;

	/**
	 * for i start from 1 to 1024
	 * if i % 3 or i % 5 equla to 0 print i
	 */
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s = s + i;
		}
	}
	if (s >= 100)
	{
		putchar((s / 100) + '0');
		putchar((s % 100 / 10) + '0');
	}
	else if (s <= 99 && s >= 10)
	{
		putchar((s / 10) + '0');
	}
	putchar((s % 10) + '0');
	return (0);
}

