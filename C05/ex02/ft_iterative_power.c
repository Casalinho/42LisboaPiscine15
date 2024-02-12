/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:31:04 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/12 02:28:06 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// int main() {
//     int base, expoente, resultado;

//     printf("Digite a base: ");
//     scanf("%d", &base);
//     printf("Digite o expoente: ");
//     scanf("%d", &expoente);

//     // Exibe as contas sendo realizadas
//     printf("Calculando %d elevado a %d:\n", base, expoente);
//     printf("%d^%d = ", base, expoente);

//     resultado = ft_iterative_power(base, expoente);
//     printf("[%d] <---- Resultado!\n", resultado);

//     return (0);
// }