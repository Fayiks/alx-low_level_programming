#include <stdio.h>
/**
 * main -Function begins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 97;

	while (d != 113 && d != 103)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
