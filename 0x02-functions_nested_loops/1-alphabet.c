#include "main.h"

/**
 * print_alphabet - prints out a-z
 * Return: void
 * There are more than two ways to solve thgis question
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar(10);
}

