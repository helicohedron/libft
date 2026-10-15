/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:42:28 by jrosette          #+#    #+#             */
/*   Updated: 2026/09/13 18:37:41 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Range of int: -2147483648 to 2147483647
Use long or handle 2147483648 when converting -2147483648 to positive
*/
#include "libft.h"

static size_t	findlen(long n);

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nbr;
	int		stopper;

	nbr = n;
	stopper = 0;
	len = findlen(nbr);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
		stopper = 1;
	}
	while (len > stopper)
	{
		len--;
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

static size_t	findlen(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
