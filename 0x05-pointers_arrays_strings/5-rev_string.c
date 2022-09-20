#include "main.h"
/**
* rev_string - Reverses a string
* @s: The string to be modified
* Return: void
*/
void rev_string(char *s)
{
int i = 0;
int g;
while (s[i] != 0)
{
i++;
}
for(g = i - 1; g >= 0; g--)
{
_putchar(s[g]);
}
_putchar('\n');
}

