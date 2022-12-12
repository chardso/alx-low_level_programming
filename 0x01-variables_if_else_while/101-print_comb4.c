
#include <stdio.h>
/**
* main - main block
* print - all possible different combinations of two digits
* Return: 0
*/
int main(void)
{
	int n;
	int first;
	int second;
	int third;

	for (n = 0; n < 999; n++)
	{
		first = n / 100;
		second = (n / 10) % 10;
		third = (n % 10);
		if (first < second && second < third)
		{
			putchar(first + '0');
			putchar(second + '0');
			putchar(third + '0');
			if (n < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

