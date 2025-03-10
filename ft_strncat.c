#include <bsd/string.h>
char    *ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int 	j;
	int	find;
	const char 	*str;
	const char 	*to_find;


	if (*little == '\0')
		return ((char *)(big));
	j = 0;
	while (*big && j < len)
	{
		j++;
		if (*big == *little)
		{
		    str = big;
		    to_find  = little;
		    while (*to_find != '\0' && *str == *to_find)
		    {
		    	str++;
		    	to_find++;
		    }
		    if (*to_find == '\0' && j < len)
		    	return ((char *)(big));
		}
		big++;
	}
	return (NULL);
}
#include <stdio.h>
int main()
{
    const char *largestring = "Hello, World!";
    const char *smallstring = "World";
    size_t length = 4;

    printf("character : %p\n", ft_strnstr(largestring, smallstring, length));
    printf("character : %p\n\n", strnstr(largestring, smallstring, length));

    printf("character : %p\n", ft_strnstr(smallstring, largestring, length));
    printf("character : %p\n\n", strnstr(smallstring, largestring, length));
}
