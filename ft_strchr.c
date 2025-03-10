#include <string.h>
char *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while(s[i] != '\0')
    {
        if (c == s[i])
        {
            return ((char *)(s + i));
        }
        i++;
    }
    if (c == '\0')
    {
        return ((char *)(s + i));
    }
    return (NULL);
}
#include <stdio.h>
int main()
{
    char src[] = "test";
    char src2[] = "dest";
    char src3[] = "set";

    printf("character : %p\n", ft_strchr(src, 'e'));
    printf("character : %p\n", strchr(src2, 'e'));
    printf("character : %p\n", strchr(src, 'e'));
}
