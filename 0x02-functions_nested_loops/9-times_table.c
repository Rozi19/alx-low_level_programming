#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * void - time table
 */
void times_table(void)
{
	int i, j, p;

	/**
	 * for i start from 0 to 9
	 * for j start from 0 to 9
	 * if p lessthan 9 print speacs
	 * if p grater than 100 divid by 100 and 10
	 * else if p lessthan 99 and p greaterthan 10 divide by 10 
	 */
	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			 p = i * j;
			 if (p <= 9)
				 _putchar(' ');
			 if (p >= 100)
			 {
				 _putchar((p / 100) + '0');
				 _putchar((p / 10) + '0');
			 }
			 else if (p <= 99 && p >= 10)
			 {
				 _putchar((p / 10) + '0');
			 }
			 _putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}