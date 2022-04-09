#include <stdio.h>


/**
* main - entry point
* 
* prints all single digit numbers of base 10 starting from 0
*
* Return: Always 0
*/

int main(void)
{
int i;

for (i = 0; i <= 9; ++i)

putchar('0' + i);

putchar('\n');

return (0);
}
