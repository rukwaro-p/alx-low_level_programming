#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* prints in lowecase and uppercase
*
* return: Always 0
*/

int main(void)
{
int c;

for (c=0; c < 26; ++c)
putchar('a' + c);

for (c=0; c < 26; ++c)
putchar('A' + c);

putchar('\n');

return (0);
}
