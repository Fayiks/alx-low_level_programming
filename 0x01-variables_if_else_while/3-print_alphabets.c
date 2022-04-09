#include <stdio.h>
/**
 * main - Function begins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 97;
	int d = 65;

	while (p <= 122 && d <= 90)
	{
		putchar(p);
		putchar(d);
		p++;
		d++;
	}
	putchar("\n");
	return (0);
}
