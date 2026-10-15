/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosette <jrosette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 17:00:53 by jrosette          #+#    #+#             */
/*   Updated: 2026/09/13 17:00:56 by jrosette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*/
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	printf("01 Print positive int (456): %i\n", ft_atoi("456"));
	printf("02 Print non-int (0): %i\n", ft_atoi("abc"));
	printf("03 Print negative int (-572): %i\n", ft_atoi("-572"));
	printf("04 Print +int with spaces (572): %i\n", ft_atoi("  572"));
	printf("05 Print -int with spaces(-572): %i\n", ft_atoi("  -572"));
	printf("06 Print edge case (-42): %i\n", ft_atoi("  -42-3"));
	printf("07 Print edge case (-42): %i\n", ft_atoi("  -42abc"));
	printf("08 Print edge case (0): %i\n", ft_atoi("  --42"));
	printf("09 Print edge case (0): %i\n", ft_atoi("  ++42"));
	printf("10 Print edge case (0): %i\n", ft_atoi("  +-42"));
	printf("11 Print edge case (0): %i\n", ft_atoi(" - 42"));
	printf("12 Print edge case (0): %i\n", ft_atoi("a42"));
	printf("13 Print edge case (99): %i\n", ft_atoi("+099"));
	return (0);
}
