/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:51:39 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/04 18:32:24 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
				&& str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d", ft_str_is_alpha("abcdefghijkl"));
// 	printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
// 	printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
// }