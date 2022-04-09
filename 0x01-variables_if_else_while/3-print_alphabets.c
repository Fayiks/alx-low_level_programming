#include <stdio.h>
/**
 * main - Function begins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;
	int d;

	for (p = 97; p <= 122; p++)
	{
		putchar(p);
	}
	for (d = 65; d <= 90; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
