#include <stdio.h>

/**
 * main - prints all possible different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	for (b = '0'; b <= '0'; b++)
	{
		for (a = '0'; a <= '0'; a++)
		{
			if (!((a == b) || (b > a)))
			{
				putchar(b);
				putchar(a);
				if (!(a == '9' && b == '8'))
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
