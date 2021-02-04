#include <stdio.h>

/* base 16 numbers */

int main(void)
{
	int num = '0';
	char alpha = 'a';

	while (num <= '9')
	{
		puchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar("\n");
	return (0);
}
