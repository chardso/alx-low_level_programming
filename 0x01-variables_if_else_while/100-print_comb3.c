#include <stdio.h>
/**
 * main - Entry path of execution
 * Return: 0 when succesful
 */

int main(void)
{

	int n;
	int first;
	int second;



	for (n = 1; n < 99; n++)
	{
		first = n / 10;
		second = n % 10;
		if (first < second)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

