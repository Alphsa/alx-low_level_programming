#include <stdio.h>
#include "main.h"
/**
* checks for a digit (0 through 9)
* Returns 1 if c is a digit and 0 otherwise
*/
int _isdigit(int c)
{
int c;
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
