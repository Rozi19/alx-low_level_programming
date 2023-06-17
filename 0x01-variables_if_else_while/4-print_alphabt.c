#include <sstdio.h>
/**
 * main- print "the alphabet in lowercase, followed by a new line
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' || 'e' )
			putchar(ch);
		printf("\n");
	}
	return (0);
}
