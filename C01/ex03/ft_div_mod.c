/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:43:53 by gmorgado          #+#    #+#             */
/*   Updated: 2024/01/31 19:28:48 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main()
// {
// 	int a;
// 	int b;
// 	int div, mod;

// 	a = 156;
// 	b = 5;
// 	ft_div_mod(a,  b, &div, &mod);
// 	printf("Resultado da Divisao: %d\n", div);
// 	printf("Resultado do Resto: %d", mod);
// 	return (0);
// }
