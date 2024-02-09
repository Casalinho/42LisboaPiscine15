/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:07:12 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/04 18:32:40 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *lowstr)
{
	int	i;

	i = 0;
	while (lowstr[i] != '\0')
	{
		if (lowstr[i] >= 'A' && lowstr[i] <= 'Z')
		{
			lowstr[i] += 32;
		}
		i++;
	}
	return (lowstr);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "OI ,TUDO BEM 23 TESTE TESTE32TE=ST+E";

// 	printf("String original:      %s\n", str);
// 	ft_strlowcase(str);
// 	printf("String em minusculas: %s\n", str);
// 	ft_strcapitalize(str);
// 	printf("String Final:         %s\n", ft_strcapitalize(str));
// 	return (0);
// }
