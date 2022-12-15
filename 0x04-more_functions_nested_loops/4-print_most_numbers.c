#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 *(neither 2 nor 4)
 * Return: no return
 */
void print_ most_numbers(void)
{
int number;
for (number = 48; number < 58; number++)
{
if ((number == 50 || number == 52))
{
continue;
}
_putchar(number);
}
_putchar(10);
}
