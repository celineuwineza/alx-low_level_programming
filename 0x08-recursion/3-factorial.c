#include "main.h"

/**
 * factorial - Calculate te factorial of a number
 * @n: the number to calculate the factorial
 *
 * Return: intager value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
