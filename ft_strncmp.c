/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 13:08:50 by jrosette          #+#    #+#             */
/*   Updated: 2026/09/12 14:28:59 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	s1len;
	size_t	s2len;
	size_t	minlen;

	i = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (s1len <= s2len)
		minlen = s1len;
	else
		minlen = s2len;
	while (i < n && i <= minlen)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
