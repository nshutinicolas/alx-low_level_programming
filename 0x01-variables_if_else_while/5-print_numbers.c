#include <stdio.h>

/* print numbers */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		printf("%i", num);
		num++;
	}
	printf('\n');
	return (0);
}
