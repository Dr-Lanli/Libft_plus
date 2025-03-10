/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:45:52 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/10 18:45:52 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include <string.h>

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
/*#include <stdio.h>
int main ()
{
    const char *str = "test";

    size_t result = ft_strlen(str);
    printf("resultat = %d", result);
}*/
