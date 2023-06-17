#include <stdio.h>
/**
 * main- print "the alphabet in lowercase, followed by a new line
 * Return: always 0
 */
int main(void)
{
	char ch;

	/* for and putchar to print the lower case */
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		/* if to check the character is not q or e */
		if (ch != 'e')
		{
			if (ch != 'q')
			putchar(ch);
		}
	}
		printf("\n");
	return (0);
}
