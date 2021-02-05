#include <stdio.h>

/* print combination of 5 */

int main(void)
{
	int first, second, third, forth;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			for (third = first; third <= '9'; third++)
				for (forth = third + 1; forth <= '9'; forth++)
				{
					putchar(first);
					putchar(second);
					putchar(' ');
					putchar(third);
					putchar(forth);
					if (first == '9' && second == '8' && third == '9' && forth == '9')
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
