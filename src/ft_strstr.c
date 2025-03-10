/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:50:59 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/10 18:50:59 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	find;
    const char *str;
    const char *to_find;

	if (*needle == '\0')
		return ((char *)(haystack));
	while (*haystack)
	{
		if (*haystack == *needle)
		{
		    str = haystack;
		    to_find  = needle;

            while (*to_find != '\0' && *str == *to_find)
            {
                str++;
                to_find++;
            }
			if (*to_find == '\0')
				return ((char *)(haystack));
		}
		haystack++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
    const char *src = "test";
    const char *src2 = "dest";
    const char *src3 = "set";

    printf("character : %p\n", ft_strstr(src, "e"));
    printf("character : %p\n", strstr(src2, "e"));
    printf("character : %p\n", strstr(src, "e"));
}*/
