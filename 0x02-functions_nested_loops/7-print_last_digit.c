#include "main.h"

/**
 * print_last_digit - find last digit of a number
 *@n: the character to be checked
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10;

if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}