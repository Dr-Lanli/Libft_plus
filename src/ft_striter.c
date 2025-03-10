/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:44:14 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/10 18:44:14 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include <string.h>

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

/*int main()
{
    char string[] = "Hello, World!";

    ft_striter(string, &ft_strlen);
}*/
