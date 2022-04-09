#include <stdio.h>


/**
* main - entry point
* 
* Description: prints in lowecase  except q and e
* Return: Always 0
*/

int main(void)
{
char c;

for (c = 0; c <= 'z'; ++c)
{
if (c != 'e' && c != 'Q')
putchar(c);
}

putchar('\n');

return (0);

}
