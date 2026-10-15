/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 12:52:00 by jrosette          #+#    #+#             */
/*   Updated: 2026/08/31 12:53:19 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*destination;
	const unsigned char	*source;

	destination = dst;
	source = src;
	if ((source < destination) && ((source + len) > destination))
	{
		i = len;
		while (i > 0)
		{
			i--;
			destination[i] = source[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (dst);
}
