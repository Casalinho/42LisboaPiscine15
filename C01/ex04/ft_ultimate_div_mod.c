/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:11:46 by mcrispim          #+#    #+#             */
/*   Updated: 2024/01/27 19:08:39 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	fds_a;

	fds_a = *a;
	*a = fds_a / *b;
	*b = fds_a % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}
*/
