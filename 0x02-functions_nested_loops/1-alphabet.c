#include "main.h"

/**
 * print_alphabet - the alphabet, in lowercase, followed by a new line
 * prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char ch = 'a';

	/**
	 * while ch strat from a to z to print lowwer cases
	 * _putchar print ch value
	 */
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
