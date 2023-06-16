#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- print "print whether the variable n is positive or negative
 * Return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*  if condition check n is positive or negative */
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero ");
	}
	else
	{
		printf("%d is negative ", n);
	}

	return (0);
}
