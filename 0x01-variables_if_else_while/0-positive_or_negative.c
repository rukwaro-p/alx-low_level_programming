#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
* 
* Description:prints a random number and states whether +ve, -ve, or zero
*
* Return: Always 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 1)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);

return (0);
}
