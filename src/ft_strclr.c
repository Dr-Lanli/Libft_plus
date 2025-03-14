/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:21:36 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/13 16:21:36 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n != 0)
	{
		*p++ = (unsigned char)c;
		n--;
	}
	return (s);
}

void	ft_strclr(char *s)
{
	size_t	size;

	size = ft_strlen(s);
	ft_memset((void *)s, '\0', size + 1);
}

/*int main()
{
	char str[] = "Hello, World!";

	printf("Original string: %s\n", str);

	ft_strclr(str);

	printf("String after ft_strclr: %s\n", str);

	return (0);
}*/
