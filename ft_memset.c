#include <string.h>
void * ft_memset( void * s, int c, size_t n )
{
    unsigned char *p;

    p = s;
    while (n != 0)
    {
        *p++ = (unsigned char)c;
        n--;
    }
    return (s);
}
/*
#include <stdio.h>
int main() {
    char test[10];

    memset(test, 'A', sizeof(test));
    printf("Using standard memset: %s\n", test);

    ft_memset(test, 'B', sizeof(test));
    printf("Using custom memset: %s\n", test);

    return 0;
}*/
