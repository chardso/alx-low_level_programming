#include <stdio.h>
/**
* main - Entry path
* Return: 0 when success
*/
int main(void)
{
char a2z;
char A2Z;
for (a2z = 97; a2z <= 122; a2z++)
{
putchar(a2z);
}
for (A2Z = 65; A2Z <= 90; A2Z++)
{
putchar(A2Z);
}
putchar('\n');
return (0);
}

