/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:37:12 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/10 18:37:12 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return (1);

    return(0);
}
/*#include <ctype.h>
#include <stdio.h>
int main ()
{
    int test = 'A';
    printf("case 1, is alpha :\n");
    printf("value : %d\n", ft_isalpha(test));
    printf("value (isalpha) : %d\n\n", isalpha(test));

    test = '\t';
    printf("case 2, non alpha :\n");
    printf("value : %d\n", ft_isalpha(test));
    printf("value (isalpha) : %d", isalpha(test));
}*/
