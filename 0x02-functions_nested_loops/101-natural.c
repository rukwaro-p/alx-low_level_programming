#include "stdio.h"

/**
 * main - print all natural nums 0 - 1024 mutiples of 3, 5
 * @n:  the num to begin count
 * Return: zero
 */
int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
	sum += i;
}
printf("%d\n", sum);

return (0);
}
