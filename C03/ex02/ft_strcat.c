/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:02:44 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/05 19:53:20 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (dest[w] != '\0')
	{
		++w;
	}
	while (src[i] != '\0')
	{
		dest[w + i] = src[i];
		++i;
	}
	dest[w + i] = '\0';
	return (dest);
}

// int main() {
//     char dest[50] = "Ola, ";
//     char src[] = "Aluno42!";

//     printf("Antes da uniao: %s\n", dest);
//     ft_strcat(dest, src);
//     printf("Depois da uniao: %s\n", dest);

//     return (0);
// }