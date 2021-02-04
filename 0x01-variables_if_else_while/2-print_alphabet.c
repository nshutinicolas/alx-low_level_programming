#include <stdio.h>

/* Print values */

int main(void)
{
	char a = 'a';

	while(a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
