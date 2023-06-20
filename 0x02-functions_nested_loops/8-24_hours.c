#include "main.h"
/**
 * void - every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j, x, y;

	/**
	 * for i start with 0 to 2 print the hour
	 * for j start with 0 to 3 print the hour
	 * for x start with 0 to 5 print minute 
	 * for y srat with 0 to 9 print minute
	 */
	for (i = 0; i <= 2; i++)
	{
		for(j = 0; j <= 3; j++)
		{
			for(x = 0; x <= 5; x++)
			{
				for(y =0; y <= 9; y++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(x + '0');
					_putchar(y + '0');
				}
			}
		}
	}
}
