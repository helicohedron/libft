/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:59:28 by jrosette          #+#    #+#             */
/*   Updated: 2026/09/12 15:01:19 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter(char const *s, char c);
static void		freearr(char **arr, size_t count);
static size_t	findword(char const *s, char c, size_t i);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	start;
	char	**arr;

	count = ft_counter(s, c);
	arr = malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < (count))
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		i = findword(s, c, i);
		arr[j] = ft_substr(s, start, (i - start));
		if (!arr[j])
			return (freearr(arr, j), NULL);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

static size_t	ft_counter(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] == c)
			in_word = 0;
		if (s[i] != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		i++;
	}
	return (count);
}

static void	freearr(char **arr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static size_t	findword(char const *s, char c, size_t i)
{
	while (s[i] != c && s[i])
		i++;
	return (i);
}
