#include <string.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *src;
    size_t i;

    src = s;
    i = 0;
    if (n == 0)
    {
        return (NULL);
    }
    while(i < n)
    {
        if (src[i] == (unsigned char)c)
        {
            return ((void *)(src + i));
        }
        i++;
    }
    return (NULL);
}
#include <stdio.h>
int main()
{
    char source[] = "test";
    size_t n = strlen(source);

    char *result = ft_memchr(source, 115, n);
    printf("Source: %s\n", source);
    printf("Returned pointer: %p\n", (void *)result);

    result = memchr(source, 115, n);
    printf("Source: %s\n", source);
    printf("Returned pointer: %p\n", (void *)result);
}
