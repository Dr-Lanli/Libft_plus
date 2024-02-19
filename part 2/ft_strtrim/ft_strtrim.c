#include <string.h>
#include <stdlib.h>

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

void	*ft_strcpy(char *dest, char *src)
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

char *ft_strtrim(char const *s)
{
    unsigned int i;
    unsigned int j;
    unsigned int end;
    size_t len_s;
    size_t len_cpy;
    char *trimed_string;
    char *cpy_string;

    len_s = ft_strlen(s);
    i = 0;
    j = 0;

    cpy_string = (char *)malloc((len_s + 1) * sizeof(char));

        if (cpy_string == NULL)
            return NULL;

    ft_strcpy(cpy_string, s);


    while(cpy_string[i] == ' ' || cpy_string[i] == ',' || cpy_string[i] == '\n' || cpy_string[i] == '\t')
    {
        i++;
    }
    end = len_s - 1;
    while(cpy_string[end] == ' ' || cpy_string[end] == ',' || cpy_string[end] == '\n' || cpy_string[end] == '\t')
        end--;

    len_cpy = ft_strlen(cpy_string) - (len_s - end);
    printf("test : %d\n", len_cpy);
    trimed_string = (char *)malloc((len_cpy + 1) * sizeof(char));

        if (trimed_string == NULL)
            return NULL;

    while(cpy_string[i] && i <= end)
	{
        trimed_string[j] = cpy_string[i];
		i++;
		j++;
	}

    trimed_string[i] = '\0';
	return (trimed_string);
}

#include <stdio.h>
int main ()
{
    char const *string1 = "  ,,\nHello, World! , \t";

    char *result = ft_strtrim(string1);

    printf("result : %s\n", result);

    free(result);

    return 0;
}

