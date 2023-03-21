#include "main.h"
/**
 *print_last_digit - prints last digit of number
 *@n: the int to extract las digit from
 *Return: value of the last digit
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (n < 0)
	{
		_putchar(-d + 48);
		return (-d);
	}
	else
	{
		_putchar(d + 48);
		return (d);
	}
}
