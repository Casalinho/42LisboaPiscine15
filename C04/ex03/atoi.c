/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:43:57 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/09 22:36:16 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	parity;
	int	number;

	number = 0;
	parity = 0;
	while ((*str <= 13 && *str >= 9) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		str++;
	}
	while (str != '\0' && *str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if (!(parity % 2))
		return (number);
	return (-number);
}

int	main(void)
{
	char *s = "   ---+-12400ab567";
	printf("%d\n", ft_atoi(s));
}