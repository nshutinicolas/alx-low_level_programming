#include <stdio.h>

int main(void)
{
    char c;
    int i;
    long l;
    float f;
    long long ll;
    printf("Size of a char: %ld byte(s)\n",sizeof(c));
    printf("Size of an int: %ld byte(s)\n",sizeof(i));
    printf("Size of a long int: %ld byte(s)\n",sizeof(l));
    printf("Size of a long long int: %ld byte(s)\n",sizeof(ll));
    printf("Size of a float: %ld byte(s)\n",sizeof(f));
    return (0);
}
