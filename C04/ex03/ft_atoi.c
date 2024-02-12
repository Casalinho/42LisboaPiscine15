/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:43:57 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/11 21:53:21 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	par;

	num = 0;
	par = 0;
	while ((*str <= 13 && *str >= 9) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			par++;
		str++;
	}
	while (*str != '\0' && *str >= 48 && *str <= 57)
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	if (!(par % 2))
		return (num);
	return (-num);
}

// int	main(void)
// {
// 	char *s = "   ---+-12400ab567";
// 	printf("%d\n", ft_atoi(s));
// }
