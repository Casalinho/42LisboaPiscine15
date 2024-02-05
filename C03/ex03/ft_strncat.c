/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:13:39 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/05 19:53:20 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	w;

	i = 0;
	w = 0;
	while (dest[w] != '\0')
	{
		++w;
	}
	while (src[i] != '\0' && i < nb)
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
//     unsigned int nb = 5;

//     printf("Antes da uniao:  %s\n", dest);
//     ft_strncat(dest, src, nb);
//     printf("Depois da uniao: %s\n", dest);

//     return (0);
// }