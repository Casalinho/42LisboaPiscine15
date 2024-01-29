/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:20:53 by gmorgado          #+#    #+#             */
/*   Updated: 2024/01/29 20:41:30 by gmorgado         ###   ########.fr       */
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

// int main() 
// {
//     int array[] = {8, 3, 9, 1, 2};
//     int size = sizeof(array) / sizeof(array[0]); // Calcula o array

//     printf("Array antes da ordenação:  ");
//     int k = 0;
//     while (k < size) {
//         printf("%d|", array[k]);
//         k++;
//     }
//     printf("\n");

//     ft_sort_int_tab(array, size); // inicia a ordenacao

//     printf("Array depois da ordenação: ");
//     int l = 0;
//     while (l < size) {
//         printf("%d|", array[l]);
//         l++;
//     }
//     printf("\n");
//     return 0;
// }
