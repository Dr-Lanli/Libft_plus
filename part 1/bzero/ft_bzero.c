#include <string.h>
void ft_bzero(void *s, size_t n)
{
    unsigned char *p;

    p = s;
    while (n != 0) {
        *p++ = '\0';
        n--;
    }
}
/*
#include <stdio.h>
int main() {
    char testA[10] = {'a','b','c','d'};

    printf("Using standard bzero: %s\n", testA);
    ft_bzero(testA, sizeof(testA));
    printf("Using custom bzero: %s\n", testA);

    testA[0] = 'a';

    printf("testA value: %s\n", testA);
    bzero(testA, sizeof(testA));
    printf("Using standard bzero: %s\n", testA);
    return 0;
}*/
