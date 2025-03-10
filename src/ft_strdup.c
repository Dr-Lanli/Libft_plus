/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:43:30 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/10 18:43:30 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include <string.h>

char *ft_strdup(const char *s)
{
    char *copy;
    int i;
    size_t len;

    len = strlen(s) + 1;
    copy = (char *) malloc( len * sizeof(char));
    i = 0;
    if (copy == NULL)
    {
        return NULL;
    }
    while(s[i] != '\0')
    {
        copy[i] = s[i];
        i++;
    }
    return (copy);
}
/*#include <stdio.h>
int main()
{
    char source1[] = "hello";
    printf("Source1: %s\n", source1);
    char *test1 = ft_strdup(source1);
    printf("returned value1: %s\n", test1);
    free(test1);

    char source2[] = "world";
    printf("Source2: %s\n", source2);
    char *test2 = strdup(source2);
    printf("returned value2: %s\n", test2);
    free(test2);

}*/
