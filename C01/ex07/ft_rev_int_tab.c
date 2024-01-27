/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:41:15 by mcrispim          #+#    #+#             */
/*   Updated: 2024/01/27 19:59:31 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < (size / 2)) 
	{
		temp = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	array[5];
	int	size;
	int	i;

	i = 0;
	size = 5;
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	ft_rev_int_tab(array, size);
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}
*/
