#include <stdio.h>

/**
 *
 */

int main(void)
{
	int a, b, level;

	for (level = 1; level = 25; level++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	printf("%li", a);
	printf("\n");
	return (0);
}
