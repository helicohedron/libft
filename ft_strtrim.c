/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 15:07:04 by jrosette          #+#    #+#             */
/*   Updated: 2026/09/13 17:34:15 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// find starting index
// find ending index
// malloc (end - start) + 2
// end is last index before NULL
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start != end + 1)
	{
		while (s1[end] && ft_strchr(set, s1[end]))
			end--;
	}
	trim = malloc((end - start) + 2);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + start, (end - start) + 2);
	return (trim);
}
