#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * void - time table
 */
void times_table(void)
{
	int i, j, r;

	/**
	 * for i start from 0 to 9
	 * for j start from 0 to 9
	 */
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			_putchar(r + '0');
		}
		_putchar('$');
		_putchar('\n');
	}
}
