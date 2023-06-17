#include <stdio.h>
/**
 * main- print "the lowercase alphabet in reverse, followed by a new line
 * Return: always zero
 */
int main(void)
{
	int ch;

	/* for loop ch strat from z decrment until a t0 print alphabet revers*/
	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
