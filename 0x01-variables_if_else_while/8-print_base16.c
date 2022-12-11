#include <stdio.h>
/**
* main - Entry path
* Return: 0 when success
*/
int main(void)
{
int nums;
int hex;
/*
* All numbers in ASII 48 to 57
* all hex letter are between 97 to 102
*/
for (nums = 48; nums <= 57; nums++)
{
putchar(nums);

}
for (hex = 97; hex <= 102; hex++)
{
putchar(hex);
}
putchar(10);
return (0);
}

