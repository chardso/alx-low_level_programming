#include <stdio.h>
/**
* main - main block
* print - prints all possible combinations of two two-digit numbers
* Return: 0
*/
int main(void)
{
	int one, two, three, four;

	for (one = 0; one <= 9; one++)
	{
		for (two = 0; two <= 9; two++)
		{
			for (three = 0; three <= 9; three++)
			{
				for (four = 0; four <= 9; four++)
				{
					if ((one < three) || (one == three && two < four))
					{
						putchar(one + '0');
						putchar(two + '0');
						putchar(' ');
						putchar(three + '0');
						putchar(four + '0');
					if (one != 9 || two != 8)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

