#include "main.h"

void
times_table(void)
{
	int c, d, e;
	for (c = 0; c < 10; c++)
	{
		for (d = 0; d < 10; d++)
		{
			e = d * c;

			if (e / 10 != 0)
			{
				_putchar(e / 10 + '0');
			}
			
			_putchar(e % 10 + '0');
			
			if (d != 9)
			{
				_putchar(',');
				_putchar('\t');
			}
		}
		_putchar('\n');
	}
}

