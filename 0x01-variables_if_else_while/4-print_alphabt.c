#include <stdio.h>
/**
 * main -Function begins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 97;

	while (d <= 122)
	{
		if (d != 101 && d != 113)
		{
			putchar(d);
			d++;
		}
	}
	putchar('\n');
	return (0);
}
