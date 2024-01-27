/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:40:33 by mcrispim          #+#    #+#             */
/*   Updated: 2024/01/27 19:02:35 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	old_a;

	old_a = *a;
	*a = *b;
	*b = old_a;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 10;
	printf("a= %d b= %d\n", a, b);
	ft_swap(&a, &b);
	printf("a= %d b= %d", a, b);
}
*/
