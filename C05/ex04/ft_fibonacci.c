/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 02:29:35 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/12 05:41:11 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int	main(void)
// {
// 	int index;
//     int i;
// 	printf("Digite o indice na sequencia de Fibonacci: ");
// 	scanf("%d", &index);
// 	printf("Sequencia de Fibonacci até o indice %d:\n", index);
// 	for (i = 0; i <= index; i++)
// 	{
// 		printf("%d ", ft_fibonacci(i));
// 	}
// 	printf("\n");
// 	return (0);
// }
