#include <string.h>

int ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while(s1[i] && s2[i])
	{
	    if(s1[i] == s2[i])
        {
            i++;
        }
        else
        {
            return 0;
        }

        return 1;
	}
}
#include <stdio.h>
int main()
{
    char *string1 = "Hello, World!";
    char *string2 = "World!";

    printf("Case 1, string1 != string2 :\n");
    printf("value : %d\n\n", ft_strequ(string1, string2));

    string1 = "World!";
    string2 = "Hello, World!";

    printf("Case 2, string1 != string2 :\n");
    printf("value : %d\n\n", ft_strequ(string1, string2));

    string1 = "Hello, World!";
    string2 = "Hello, World!";

    printf("Case 3, string1 = string2 :\n");
    printf("value : %d\n", ft_strequ(string1, string2));

    return 0;
}
