#include <unistd.h>
#include "main.h"
/**
 * main - using _putchar to the standard io
 * printing putchar
 * Return: 0
*/
int main(void)
{
		char *x = "_putchar";

		while (*x)
		{
			_putchar(*x);
			x++;
		}
		_putchar('\n');
return (0);
}

