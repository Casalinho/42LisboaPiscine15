/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 03:13:32 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/12 14:31:57 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 2;
	if (nb < 2)
		return (0);
	while (divisor <= nb / divisor)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}

int	main(void)
{
	int num;
	printf("          Jogo 1\n");
	while (1)
	{
		printf("Descobre um numero primo: ");
		scanf("%d", &num);

		if (ft_is_prime(num))
		{
			printf("    %d e primo. Ganhou.\n\n", num);
			return (0);
		}
		else
		{
			printf("     %d nao e primo.\n\n    Tente novamente.\n", num);
		}
	}
	return (0);
}
