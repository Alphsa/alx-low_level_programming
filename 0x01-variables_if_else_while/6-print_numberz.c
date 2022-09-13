#include <stdio.h>
/**
* main - Prints numbers between 0 to 9.
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char ch[10] = "0123456789";

for (i = 0; i < 10; i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
