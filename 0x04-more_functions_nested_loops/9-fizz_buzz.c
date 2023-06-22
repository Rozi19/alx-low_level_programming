#include "main.c"
/**
 * main - prints the numbers from 1 to 100
 * Return: 0
 */
int main(void)
{
	int i;
	
	/**
	 * for i start form 1 to 100
	 * if i divide by 3 and 5 then reminder is 0
	 * else if print i
	 */
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			if (i >= 100)
			{
				_putchar((i / 100) + '0');
				_putchar((i % 100 / 10) + '0');
			}
			else if (i <= 99 && i >= 10)
			{
			_putchar((i / 10) + '0');
			}
		_putchar((i % 10) + '0');
		}
		if (i < 100)
			_putchar(' ');
	}
	return (0);
}
