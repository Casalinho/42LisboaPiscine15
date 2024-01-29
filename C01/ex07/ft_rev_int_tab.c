/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:09:02 by gmorgado          #+#    #+#             */
/*   Updated: 2024/01/29 19:30:06 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int main(void) {
//     int array[5] = {1, 2, 3, 4, 5};
//     int i;
//     printf("Array antes da reversão:  ");
//     for (i = 0; i < 5; i++) {
//         printf("%d|", array[i]);
//     }
//     printf("\n");
//     ft_rev_int_tab(array, 5);
//     printf("Array depois da reversão: ");
//     for (i = 0; i < 5; i++) {
//         printf("%d|", array[i]);
//     }
//     printf("\n");
//     return 0;
// }
