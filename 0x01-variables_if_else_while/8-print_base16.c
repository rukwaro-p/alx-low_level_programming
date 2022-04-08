#include <stdio.h>


/**
* prints all single digit numbers of base 16 in lowercase
*
* return: Always 0
*/

int main(void)
{
char x;

for (x='0'; x <= '9'; ++x)

putchar(x);

for (x='a'; x <= 'f'; ++x)

putchar(x);


putchar('\n');

return (0);
}
