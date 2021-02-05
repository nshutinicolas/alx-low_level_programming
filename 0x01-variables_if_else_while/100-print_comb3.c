#include <stdio.h>

/* print combination of numbers */

int main(void)
{
	int first, last;

	for (first = '0'; first <= '9'; first++)
	{
		for (last = first + 1; last <= '9'; last++)
		{
			putchar(first);
			putchar(last);
			if (last != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
