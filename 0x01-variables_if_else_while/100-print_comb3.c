#include <stdio.h>
/**
 *main - Entry point
 *Description: 'print all possible different combination'
 *Return: always 9
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 1; m < 10; m++)
		{
			if (n < m && n != m)
			{
				putchar(n + '0');
				putchar(m + '0');
				if (n + m != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
