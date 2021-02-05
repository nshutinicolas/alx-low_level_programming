#include <stdio.h>

/* print numbers */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		printf("%c", num);
		num++;
	}
	printf('\n');
	return (0);
}
