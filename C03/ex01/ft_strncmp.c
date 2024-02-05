/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:17:43 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/05 19:53:20 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
}

// int	main(void)
// {
// 	char str1[] = "Antonio";
// 	char str2[] = "Goncalo";
// 	char str3[] = "Antonio";

// 	printf("Comparando Str1 com Str2' (3 characters): %d\n", ft_strncmp(str1,
// 			str2, 3));
// 	printf("Comparando Str1 com Str3' (3 characters): %d\n", ft_strncmp(str1,
// 			str3, 3));

// 	return (0);
// }