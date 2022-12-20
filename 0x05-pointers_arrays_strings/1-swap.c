#include "main.h"
/**
 * swap_int - swaps the values of two pointer variables
 * assigns the memory address of a to b and vice visa
 * @a: pointer variable pointing to memory address of a variable
 * @b: points to memory address of b
*/

void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;

}

