/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 15:03:11 by jrosette          #+#    #+#             */
/*   Updated: 2026/09/12 15:03:19 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	count;

	count = ft_strlen(s1);
	ptr = malloc(1 + count);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, (count + 1));
	return (ptr);
}
