#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
* 
* Description: prints in lower case
* Return: Always 0
*/
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);

putchar('\n');

return (0);
}
