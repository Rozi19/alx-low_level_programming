#include <stdio.h>
/**
 * main- print "possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int n, m;

	/**
	 * for loop check the first digit number from 0 to 8
	 * for loop the 2nd check the second digit from first digit + 1 to 9
	 * print first and second diigit
	 * if first digit less than 8 print , spaces
	 */
	for (n = 0 ; n < 9 ; n++)
		for (m = n + 1 ; m <= 9 ; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
		if (n < 8)
		{
			putchar(',');
			putchar(' ');
		}
		}
	return (0);
}
