/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:57:39 by jrosette          #+#    #+#             */
/*   Updated: 2026/09/12 14:58:00 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;
	size_t	i;

	nbr = ft_itoa(n);
	i = 0;
	while (nbr[i])
	{
		write(fd, &nbr[i], 1);
		i++;
	}
	free(nbr);
}
