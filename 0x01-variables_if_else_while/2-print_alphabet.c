#include <stdio.h>
/**
 * main- print "the alphabet in lowercase, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		/*  putchar print our lower alphabets */
		putchar(ch);
	printf("\n");
	return (0);
}
