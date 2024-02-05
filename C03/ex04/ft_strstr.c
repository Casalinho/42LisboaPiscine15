/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:26:19 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/05 19:53:20 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	if (to_find[w] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + w] == to_find[w] && str[i + w] != '\0')
		{
			++w;
		}
		if (to_find[w] == '\0')
		{
			return (str + i);
		}
		++i;
		w = 0;
	}
	return (0);
}

// int main() {
//     char str1[] = "Ola, Mundo, sou Pisciner da 42!";
//     char str2[] = "P";
//     char *result;

//     result = ft_strstr(str1, str2);

//     if (result != NULL) {
//         printf("String encontrada: %s\n", result);
//     } else {
//         printf("String não encontrada.\n");
//     }

//     return 0;
// }