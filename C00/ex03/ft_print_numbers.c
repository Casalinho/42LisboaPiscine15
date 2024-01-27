/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:14:44 by gmorgado          #+#    #+#             */
/*   Updated: 2024/01/26 22:59:08 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numero;

	numero = '0';
	while (numero <= '9')
	{
		write(1, &numero, 1);
		numero++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/