#include <string.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *destm;
    const unsigned char *srcm;
    size_t i;

    destm = dest;
    srcm = src;
    i = 0;
    while(i < n)
    {
        destm[i] = srcm[i];
        i++;
    }
    return (destm);
}
/*#include <stdio.h>
int main()
{
    char source[] = "test";
    char destination[20];
    size_t n = sizeof(source);

    printf("Source: %s\n", source);
    ft_memcpy(destination, source, n);
    printf("Destination: %s\n", destination);

    printf("Source: %s\n", source);
    memcpy(destination, source, n);
    printf("Destination: %s\n", destination);
}*/
