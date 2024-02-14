/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 03:03:41 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/12 11:50:55 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt_recur(int nb, int i)
{
	if (nb > 2147395600)
		return (0);
	if (i * i == nb)
		return (i);
	if (i * i < nb)
		return (ft_sqrt_recur(nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recur(nb, 0));
}

// int	main(void)
// {
// 	int nb, resultado;
// 	printf("Digite um numero para encontrar a raiz quadrada inteira: ");
// 	scanf("%d", &nb);
// 	resultado = ft_sqrt(nb);
// 	if (resultado == 0)
// 		printf("A raiz quadrada de %d e um numero irracional.\n", nb);
// 	else
// 		printf("A raiz quadrada de %d e: %d\n", nb, resultado);
// 	return (0);
// }
