#include <stdio.h>

/* print combination of 3 */

int main(void)
{
	int first, middle, last;

	for (first = '0'; first <= '9'; first++)
	{
		for (middle = first + 1; middle <= '9'; middle++)
		{
			for (last = middle + 1; last <= '9'; last++)
			{
				putchar(first);
				putchar(middle);
				putchar(last);
				if (!(first == '7' && middle == '8' && last == '9'))
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
