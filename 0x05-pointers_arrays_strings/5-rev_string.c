#include "main.h"
#include <stdio.h>
#include <conio.h>
/**
* rev_string - Reverses a string
* @s: The string to be modified  Return: void
*/
void rev_string(char *s)
{

int i, left, right, len; 
len = _strlen(*s); 
left = 0;
right = len - 1;

for (i = left; i < right; i++)
{
temp = s[i];
s[i] = s[right];
s[right] = temp;
right--; }  
}
