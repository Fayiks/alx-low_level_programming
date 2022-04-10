#include <stdio.h>
/**
 * main - Function begins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, g;

	for (i = 48; i < 58; i++)
	{
		for (e = 48; e < 58; e++)
		{
			for (g = 48; g < 58; g++)
			{
				if (e != i && e != g && i != g && e < i && i < g)
				{
					putchar(e);
					putchar(i);
					putchar(g);
					if (i == 56 && e == 55 && g == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

