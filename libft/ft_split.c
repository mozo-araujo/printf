/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:00:06 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/19 18:34:34 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	size_t	ft_word_size(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static	char	*ft_next_word(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static	size_t	ft_get_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		words++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (words);
}

static	void	ft_free_all(char **s_words, size_t i)
{
	size_t	j;

	j = 0;
	while (j <= i)
	{
		free(s_words[j]);
		j++;
	}
	free(s_words);
}

char	**ft_split(char const *s, char c)
{
	char	**s_words;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = ft_get_words(s, c);
	s_words = malloc((words + 1) * sizeof(char*) );
	if (!s_words)
		return (NULL);
	i = 0;
	while (i < words)
	{
		s = ft_next_word(s, c);
		s_words[i] = ft_substr(s, 0, ft_word_size(s, c));
		if (s_words[i] == NULL)
		{
			ft_free_all(s_words, i);
			return (NULL);
		}
		i++;
		s += ft_word_size(s, c);
	}
	s_words[i] = NULL;
	return (s_words);
}
