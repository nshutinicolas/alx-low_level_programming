#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dor korpar, 2015-10-19\n";
	int len = strlen(quote);

	write(2, quote, len);
	return (1);
}
