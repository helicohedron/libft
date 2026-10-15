/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:54:44 by jrosette          #+#    #+#             */
/*   Updated: 2026/09/12 14:41:13 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(s);
	while (i <= slen)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&(s[i]));
		i++;
	}
	return (NULL);
}
