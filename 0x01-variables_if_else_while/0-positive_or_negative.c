#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - prints a random number and states whether
* +ve, -ve, or zero
*
* return: Always 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 1)
printf("% is positive\n", n);
else if (n < 0)
printf("% is negative\n", n);
else
printf("% is zero\n", n);

return (0);
}
