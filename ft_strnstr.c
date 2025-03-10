#include <bsd/string.h>
char    *ft_strnstr(const char *big, const char *little, size_t len)
{
	int	    i;
	size_t  j;
	int	    find;
	const char 	    *str;
	const char 	    *to_find;


	if (*little == '\0')
		return ((char *)(big));
	j = 0;
	while (*big && j < len)
	{
		if (*big == *little)
		{
		    str = big;
		    to_find  = little;
		    while (*to_find != '\0' && *str == *to_find)
		    {
		    	str++;
		    	to_find++;
		    }
		    if (*to_find == '\0')
		    	return ((char *)(big));
		}
		big++;
        j++;
	}
	return (NULL);
}
#include <stdio.h>
int main()
{
    const char *largestring = "Hello, World!";
    const char *smallstring = "World";
    size_t length = 15;
    size_t length2 = 5;

    printf("case 1, lenght >= largestring :\n");
    printf("character : %p\n", ft_strnstr(largestring, smallstring, length));
    printf("character : %p\n\n", strnstr(largestring, smallstring, length));

    printf("case 2, lenght <= largestring :\n");
    printf("character : %p\n", ft_strnstr(largestring, smallstring, length2));
    printf("character : %p\n\n", strnstr(largestring, smallstring, length2));

    printf("case 3, big < little :\n");
    printf("character : %p\n", ft_strnstr(smallstring, largestring, length));
    printf("character : %p\n\n", strnstr(smallstring, largestring, length));
}
