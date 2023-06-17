#include <stdio.h>
/**
 * main- print " all single digit numbers of base 10 starting from 0
 * Return: always zero
 */
int main(void)
{
	int n;

/* for loop n to start from 0  and incrment unitle 9 */
	for (n = 0 ; n < 10 ; n++)
		/* print n */
	printf("%d", n);
	printf("\n");
	return (0);
}
