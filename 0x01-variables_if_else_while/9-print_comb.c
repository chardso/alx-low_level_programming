#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Entry point
 * Return:  0 when successful
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num <  57)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
=======
* main - Entry point
*
* retun: Always 0 (success)
*/

int main(void)
{
       int a;
       for(a = 0; a < 10; a++)
{
       putchar(a +'0')
       if(a < 9)
{
       putchar(',');
       putchar(','); 
}
       putchar('\n');
       Return(0);
>>>>>>> 9bfcf5519f2cc73846899eb6184c7b936ed28eba
}

