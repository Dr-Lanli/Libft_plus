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

char * ft_strnew(size_t size)
{
    if (size == 0)
    {
        return (NULL);
    }

    char *memory = malloc(size + 1);

    if (memory == NULL)
    {
        return (NULL);
    }

    ft_memset(memory, '\0', size + 1);

    return (memory);

}

int main()
{
    size_t size = 10;
    char *str_test = (char *)ft_strnew(size * sizeof(char));

    if (str_test != NULL)
    {
        for (size_t i = 0; i < size; ++i)
        {
            printf("%c ", str_test[i]);
        }

        free(str_test);
    }

    return 0;
}
