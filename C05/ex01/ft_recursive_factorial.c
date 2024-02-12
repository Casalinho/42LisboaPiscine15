/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:05:37 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/12 05:40:07 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// int main() {
//     int numero, resultado, original;

//     printf("Digite um número para calcular o seu fatorial recursivo: ");
//     scanf("%d", &numero);
//     original = numero;

//     printf("Calculando o fatorial recursivo de %d: ", numero);

//     while (numero > 1) {
//         printf("%d * ", numero);
//         numero--;
//     }
//     printf("%d\n", numero);

//     resultado = ft_recursive_factorial(original);

//     if (resultado == 0)
//         printf("Não é possível calcular o fatorial\n");
//         printf("Número negativo.\n");
//     else
//         printf("O fatorial recursivo de %d é: %d\n", original, resultado);

//     return (0);
// }