#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- print " the last digit of the number stored in the variable n.
 * Return: Always zero
 */
 int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*digit store our last number */
	digit= n % 10;
	printf("Last digit of %d", n);
	/* if checks whether the last digit is greter than 5
	 * or equal to zero
	 * or less than 6 not 0
	 */
	if (digit > 5)
	{
		printf("is %d and is greater than 5\n", digit);
	}
	else if (digit == 0)
	{
		printf("is %d and is 0\n", digit);
	}
	else
	{
		if (digit < 6)
		{
			if (digit != 0)
			{
				printf("is %d and is less than 6 and not 0\n", digit);
			}
		}
	}
	return (0);
}
