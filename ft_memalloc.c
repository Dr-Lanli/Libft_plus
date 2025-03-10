#include <stdlib.h>

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

void * ft_memalloc(size_t size)
{
    if (size == 0)
    {
        return (NULL);
    }

    void *memory = malloc(size);

    if (memory == NULL)
    {
        return (NULL);
    }

    ft_memset(memory, 0, size);

    return (memory);
}

int main()
{
    size_t size = 10;
    int *intArray = (int *)ft_memalloc(size * sizeof(int));

    if (intArray != NULL)
    {
        for (size_t i = 0; i < size; ++i)
        {
            printf("%d ", intArray[i]);
        }

        free(intArray);
    }

    return 0;
}
