#include <string.h>
#include <stdio.h>

void ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    printf("lenght : %d", i);
}

void ft_striter(char *s, void (*f)(char *))
{
    f(s);
}

int main()
{
    char string[] = "Hello, World!";

    ft_striter(string, &ft_strlen);
}
