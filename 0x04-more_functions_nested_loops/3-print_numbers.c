#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * void: return noting
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
