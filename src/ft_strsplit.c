/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmonsat <lmonsat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:26:43 by lmonsat           #+#    #+#             */
/*   Updated: 2025/03/13 16:26:43 by lmonsat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"


int	ft_words(char const *s, char c)
{
	int words;
	int in_word;

	words = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!in_word)
			{
				in_word = 1;
				words++;
			}
		}
		else
			in_word = 0;
		s++;
	}
	return (words);
}

static char	*ft_copy_word(char const *s, char c)
{
	char *word_start;
	char *word;
	int len;
	int i;

	word_start = s;
	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		word[i++] = word_start[i];
	word[len] = '\0';
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	int num_words;
	int i;
	int in_word;
	char **result;

	num_words = ft_words(s, c);
	result = (char **)malloc((num_words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!in_word)
				result[i++] = ft_copy_word(s, c);
			in_word = 1;
		}
		else
			in_word = 0;
		s++;
	}
	result[num_words] = NULL;
	return (result);
}

/*#include <stdio.h>
int main ()
{
	char const *string1 = "*hello***fellow***students*";
	char c = '*';
	int i = 0;

	char **result = ft_strsplit(string1, c);

	if(result != NULL)
	{
		while(result[i])
		{
			printf("result : %s\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}

	return (0);
}*/
