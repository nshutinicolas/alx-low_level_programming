#include <stdio.h>

/* print combination from 00 - 99 */

int main(void)
{
	int num = '0';

	while (num <= '99')
	{
		if(num <= '9')
		{
			putchar('0');
		}
		putchar(num);
		if(num != '99')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}