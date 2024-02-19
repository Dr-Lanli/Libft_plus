#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

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

char ft_strupcase(char str)
{
        if (str >= 'a' && str <= 'z')
            str -= 32;

    return str;
}

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new_string;
    unsigned int i;

    i = 0;
    new_string = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));

    ft_strcpy(new_string, s);

        while(new_string[i])
        {
            new_string[i] = f(new_string[i], i);
            i++;
        }
    return (new_string);
}

int main()
{
    const char string[] = "Hello, World!";
    printf("original string : %s\n", string);

    char *result = ft_strmapi(string, &ft_strupcase);
    printf("result : %s\n", result);

    free(result);

    return 0;
}
