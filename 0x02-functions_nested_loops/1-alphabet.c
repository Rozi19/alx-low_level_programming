#include "main.h"

/**
 * void- it return noting
 * print_alphabet the alphabet, in lowercase, followed by a new line
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
