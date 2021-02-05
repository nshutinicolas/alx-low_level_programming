#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char string[] = "and that piece of art is useful\" - Dor korpar, 2015-10-19";
	int len = strlen(string);

	write(2, "and that piece of art is useful\" - Dor korpar, 2015-10-19",len);
	return (1);
}
