#include <stdio.h>
#include "main.h"

void
print_to_98(int n)
{
	int c;

	if (n >= 98)
	{
		for (c = n; c >= 98; c--)
		{
			if (c != 98)
				printf("%d, ", c);
			else printf("%d", c);
		}
	} else 
	{
		for (c = 0; c <= 98; c++)
		{
			if (c != 98)
				printf("%d, ", c);
			else printf("%d", c);
		}
	}

	_putchar('\n');
}

