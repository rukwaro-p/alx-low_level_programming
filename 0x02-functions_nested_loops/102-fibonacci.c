#include "stdio.h"

/**
 * main - print all first 50 fibonacci nums
 * Return: zero
 */
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;

for (count = 0; count < 50; count++)
{
sum = fib1 + fib2;
printf("%lu", sum);

fib1 = fib2;
fib2 = sum;

if (count == 49)
printf("\n")
else
printf(", ")
}
return (0);
}
