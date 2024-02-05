/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:51:49 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/05 20:11:22 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_len(char *str)
// verificar o tamanho
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sr;
	unsigned int	d;

	i = 0;
	j = 0;
	sr = ft_len(src);
	d = ft_len(dest);
	if (size == 0 || size <= d)
		return (sr + size);
	while (dest[j] != '\0' && j < size)
	{
		j++;
	}
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (sr + d);
}

// int main() {
//     char dest[20] = "Olá ";
//     char src[] = "Aluno42 ou pisciner!";

//     printf("Antes da concatenação: %s\n", dest);
//     unsigned int result = ft_strlcat(dest, src, 20);
//     printf("Depois da concatenação: %s\n", dest);
//     printf("Comprimento da string concatenada: %u\n", result);

//     return (0);
// }
