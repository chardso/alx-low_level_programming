#include <stdio.h>
/**
* main - Entry path
* Return: 0 when success
*/
int main(void)
{
char a2z;
/*
* q => 113
* 101 => e
* can i have to use the continuestatement to skip tese two values
*/
for (a2z = 97; a2z <= 122; a2z++)
{
if (a2z == 113 || a2z == 101)
{
continue;
}
else
{
putchar(a2z);
}
}
putchar('\n');
return (0);
}

