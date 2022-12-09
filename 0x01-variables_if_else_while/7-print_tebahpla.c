#include <stdio.h>

/**
 * main - print the alpha in reverse
 * Return: Always 0
 */
int main(void)
{
	char re;

	for (re = 'z'; re >= 'a'; re--)
		putchar(re);

	putchar('\n');

	return (0);
}
