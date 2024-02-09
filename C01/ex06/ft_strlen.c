/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:27:29 by gmorgado          #+#    #+#             */
/*   Updated: 2024/01/29 19:08:39 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

// int main()
// {
//     char*c = "stringtemtamanhode26letras";
//     int a = ft_strlen(c);
//     printf("Valor encontrado de %d letras nesta string\n, a);
//     printf("Siga para o proximo\n",);
//     return (0);
// }
