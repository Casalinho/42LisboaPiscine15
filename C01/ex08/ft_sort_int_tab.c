/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:20:53 by gmorgado          #+#    #+#             */
/*   Updated: 2024/01/31 21:48:09 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp; 
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	array[] = {8, 3, 1, 9, 5, 4, 7, 2};
	int	k;
	int	l;

	int size = sizeof(array) / sizeof(array[0]); // Calcula o array
	printf("Array antes da ordenação:  |");
	k = 0;
	while (k < size)
	{
		printf("%d|", array[k]);
		k++;
	}
	printf("\n");
	ft_sort_int_tab(array, size); // inicia a ordenacao
	printf("Array depois da ordenação: |");
	l = 0;
	while (l < size)
	{
		printf("%d|", array[l]);
		l++;
	}
	printf("\n");
	return (0);
}
