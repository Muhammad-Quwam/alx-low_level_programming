#include <stdio.h>

/**
 * main - Print the numbers from 0 to 99
 * Return: 0
 */
int main(void)
{
	int digit1, digit2, digit3=0;

	for (digit1 = '0'; digit1 <= '9'; digit1++)
	{
		for (digit2 = digit3; digit2 <= '9'; digit2++)
		{

			if (digit1 != digit2)
			{
				putchar(digit1);
				putchar(digit2);
			}
			if (digit1 == digit2)
			{
				continue;
			}
			if (digit1 == '8' && digit2 == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		digit3++;
	}

	putchar('\n');

	return (0);
}
