/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:30:06 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/05 19:53:20 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char str1[] = "123";
// 	char str2[] = "321";
// 	char str3[] = "123";

// 	printf("Comparando Str1 com Str2': %d\n", ft_strcmp(str1, str2));
// 	printf("Comparando Str1 com Str3': %d\n", ft_strcmp(str1, str3));

// 	return (0);
// }