#include "main.h"

/**
  * print_times_table - Prints a multiplication table
  * @a: The number to be passed
  *
  * Return: int
  */
void print_times_table(int a)
{
	int x, y, z;

	if (a >= 0 && a <= 14)
	{
		for (x = 0; x <= a; x++)
		{
			for (y = 0; y <= a; y++)
			{
				z = x * y;
				if (z > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(z + '0');
				}
			}
			_putchar(10);
		}
	}
}
