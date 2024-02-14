/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 03:45:21 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/12 11:40:45 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	next;

	if (nb <= 1)
		return (2);
	next = nb;
	while (!ft_is_prime(next))
	{
		next++;
	}
	return (next);
}

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 2;
	if (nb <= 1)
		return (0);
	while (divisor * divisor <= nb)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}

int	main(void)
{
	int	num;
	int	next_prime;

	printf("Digite um numero: ");
	scanf("%d", &num);
	next_prime = ft_find_next_prime(num);
	if (num == next_prime)
		printf("Erro, Impossivel determinar\no Numero [%d] ja e primo.\n", num);
	else
		printf("O proximo numero primo apos %d e [%d]\n", num, next_prime);
	return (0);
}
