/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 03:03:41 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/12 05:42:29 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	menormetade;
	int	maiormetade;
	int	resultado;
	int	meio;

	if (nb <= 1)
		return (nb);
	menormetade = 1;
	maiormetade = nb;
	resultado = 0;
	while (menormetade <= maiormetade)
	{
		meio = menormetade + (maiormetade - menormetade) / 2;
		if (meio <= nb / meio)
		{
			resultado = meio;
			menormetade = meio + 1;
		}
		else
		{
			maiormetade = meio - 1;
		}
	}
	return (resultado);
}

// int main()
// {
//     int num, resultado;

//     printf("Digite um numero para encontrar a raiz quadrada inteira: ");
//     scanf("%d", &num);

//     resultado = ft_sqrt(num);

//     if (resultado == 0)
//         printf("A raiz quadrada de %d e um numero irracional.\n", num);
//     else
//         printf("A raiz quadrada de %d e: %d\n", num, resultado);

//     return (0);
// }
