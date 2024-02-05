/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:56:16 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/04 18:32:33 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d", ft_str_is_uppercase("ABCDEFGH"));
// 	printf("\n%d", ft_str_is_uppercase("ABCDEFGHaI"));
// 	printf("\n%d", ft_str_is_uppercase("-_134556ABCDEFGaH67"));
// }