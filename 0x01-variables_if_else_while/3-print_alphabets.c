#include <stdio.h>
/**
 * main- print "the alphabet in lowercase, and then in uppercase, a new line
 * Return: Always zero
 */
int main(void)
{
	char ch;

	/**
	 * the first for and putchar print lower case
	 * the second for and putchar print upper case
	 */
	for  (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);
	printf("\n");
	return (0);
}
