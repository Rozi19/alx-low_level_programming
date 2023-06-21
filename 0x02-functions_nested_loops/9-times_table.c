#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * void - time table
 */
void times_table(void)
{
	long int i, j;

	/**
	 * for i start from 0 to 9
	 * for j start from 0 to 9
	 */
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
