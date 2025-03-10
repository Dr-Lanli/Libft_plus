/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:51:27 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/10 18:51:27 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include <string.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    char *new_string;

    i = 0;
    new_string = (char *)malloc((len + 1) * sizeof(char));

    if (new_string == NULL)
        return NULL;

    while(s[i + start] && i < len)
	{
        new_string[i] = s[i + start];
		i++;
	}
    new_string[i] = '\0';
	return (new_string);
}

/*#include <stdio.h>
int main ()
{
    char const *string = "Hello, World!";

    char *result = ft_strsub(string, 7, 6);

    printf("result : %s\n", result);

    free(result);

    return 0;
}*/

