#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * prints 10 times the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char ch;

	/**
	 * while i start from 1 to 10 print ch 10 time
	 * while ch start from a to z print lowwercase 
	 */
	while (i <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
