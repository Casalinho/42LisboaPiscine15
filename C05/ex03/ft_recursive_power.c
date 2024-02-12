/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:31:04 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/12 02:28:11 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	int base, expoente, resultado;

// 	printf("Digite a base: ");
// 	scanf("%d", &base);
// 	printf("Digite o expoente: ");
// 	scanf("%d", &expoente);

// 	// Exibe as contas sendo realizadas
// 	printf("Calculando %d elevado a %d:\n", base, expoente);
// 	printf("%d^%d = ", base, expoente);

// 	resultado = ft_recursive_power(base, expoente);
// 	printf("[%d] <---- Resultado!\n", resultado);

// 	return (0);
// }