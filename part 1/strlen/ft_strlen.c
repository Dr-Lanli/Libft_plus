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
#include <stdio.h>
int main ()
{
    const char *str = "test";

    size_t result = ft_strlen(str);
    printf("resultat = %d", result);
}
