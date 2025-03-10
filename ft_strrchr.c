#include <string.h>
size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return (i);
}
char *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);
    while(i > 0)
    {
        if (c == s[i])
        {
            return ((char *)(s + i));
        }
        i--;
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

    printf("character : %p\n", ft_strrchr(src, 'e'));
    printf("character : %p\n", strrchr(src2, 'e'));
    printf("character : %p\n", strrchr(src, 'e'));
}
