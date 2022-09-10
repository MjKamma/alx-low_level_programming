#include <stdio.h>

/**
 * imain - Entry Point
 * Description: Write a program that prints all possible combinations of two two-digit numbers.
 * different combinations of two digits
 * Return: 0
*/ 

int main(void)
{
	int firstDigit = 0, seconDigit;

	while (firstDigit <= 99)
	{
		seconDigit = firstDigit;
		while (seconDigit <= 99)
		{
			if (seconDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putchar((seconDigit % 10) + 48);

				if (firstDigit != 98 || seconDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++seconDigit;
		}
		++seconDigit;
	}
	putchar('\n');
	
	return (0);
}

