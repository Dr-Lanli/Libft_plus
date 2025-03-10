/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:44:42 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/10 18:44:42 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include <string.h>

void ft_strupcase(unsigned int i, char *str)
{
    int j = 0;
    while (str[j])
    {
        if (str[j] >= 'a' && str[j] <= 'z')
            str[j] -= 32;
        j++;
    }
}

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

/*int main()
{
    char string[] = "Hello, World!";
    printf("original string : %s\n", string);

    ft_striteri(string, &ft_strupcase);

    printf("modified string : %s\n", string);
    return 0;
}*/
