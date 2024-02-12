/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:28:22 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/12 05:39:19 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	i = 0;
	factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (i < nb)
		{
			factorial = factorial * (i + 1);
			i++;
		}
	}
	return (factorial);
}

// int main() {
//     int numero, resultado, original;

//     printf("Digite um número para calcular o seu fatorial: ");
//     scanf("%d", &numero);
//     original = numero;

//     printf("Calculando o fatorial de %d: ", numero);

//     while (numero > 1) {
//         printf("%d * ", numero);
//         numero--;
//     }
//     printf("%d\n", numero);

//     resultado = ft_iterative_factorial(original);

//     if (resultado == 0)
//      printf("Não é possível calcular o fatorial\n");
//      printf("Número negativo.\n");
//     else
//         printf("O fatorial de %d é: %d\n", original, resultado);

//     return (0);
// }