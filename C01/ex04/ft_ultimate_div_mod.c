/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:43:53 by gmorgado          #+#    #+#             */
/*   Updated: 2024/01/29 19:28:23 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main()
// {
//	int a;
//	int b;

// 	a = 150;
// 	b = 5;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("Resultado da Divisao: %d\n", a);
// 	printf("Resultado do Resto: %d", b);
// 	return (0);
// }
