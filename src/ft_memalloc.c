/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:29:50 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/13 16:29:50 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

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

void	*ft_memalloc(size_t size)
{
	void	*memory;

	if (size == 0)
	{
		return (NULL);
	}
	memory = malloc(size);
	if (memory == NULL)
	{
		return (NULL);
	}
	ft_memset(memory, 0, size);
	return (memory);
}

/*int main()
{
	size_t size = 10;
	int *intArray = (int *)ft_memalloc(size * sizeof(int));

	if (intArray != NULL)
	{
		for (size_t i = 0; i < size; ++i)
		{
			printf("%d ", intArray[i]);
		}

		free(intArray);
	}

	return (0);
}*/
