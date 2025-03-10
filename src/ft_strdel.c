/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:43:23 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/10 18:43:23 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include <stdlib.h>

void ft_strdel(char **as)
{
    free(*as);
    *as = NULL;
}

/*int main()
{
    char *str_test = (char *)malloc(5 * sizeof(char));
    if (str_test != NULL)
    {
        printf("Memory allocated successfully.\n");

        ft_strdel(&str_test);

        if (str_test == NULL)
        {
            printf("Memory freed successfully.\n");
        }
        else
        {
            printf("Memory not freed.\n");
        }
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
