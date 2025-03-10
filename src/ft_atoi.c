/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:36:56 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/10 18:36:56 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_atoi(char *str)
{
    int n;
    int is_negative;
    int i;

    n = 0;
    is_negative = 0;
    i = 0;
    while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
        i++;
    if (str[i] == '-')
    {
        is_negative = 1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + str[i] - '0';
        i++;
    }
    if (is_negative)
        return (-n);
    else
        return (n);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char *string = "125698";

    printf("value (ft_atoi) : %d\n", ft_atoi(string));
    printf("value (std atoi): %d\n", atoi(string));
}*/
