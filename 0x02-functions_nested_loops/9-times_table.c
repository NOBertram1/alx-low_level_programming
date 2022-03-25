#include "main.h"

/**
 * times_table - Print the 9 times table, starting with 0
 * Return: 0
 */

void times_table(void)
{
	int x = 0; /* factor */
	int y; /* count  */
	int result; /* computed result */

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			result = x * y;

			if (result > 9)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result + '0');
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
