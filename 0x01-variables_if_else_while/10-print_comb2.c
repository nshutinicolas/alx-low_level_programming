#include <stdio.h>

/* print combination from 00 - 99 */

int main(void)
{
	int num = 0;

	while (num <= 99)
	{
		putchar(num / 10 + '0');
		putchar(num % 10 + '0');
		if(num != 99)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
