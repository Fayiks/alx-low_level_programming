#include <stdio.h>
/**
 * main - Function begins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, g;

	while (e < 58)
	{
		i = 48;
		while (e < 58)
		{
			g = 48;
			while (g < 58)
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
				g++
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}

