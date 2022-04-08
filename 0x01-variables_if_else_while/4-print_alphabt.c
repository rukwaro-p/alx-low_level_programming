#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* prints in lowecase  except q and e
*
* return: Always 0
*/

int main(void)
{
int c;

for (c=0; c < 'z'; ++c)
{
if (c != 'e' && c != 'q')
putchar(c);
}

putchar('\n');

return (0);
}
