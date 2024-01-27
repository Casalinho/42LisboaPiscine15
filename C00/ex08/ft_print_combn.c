/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:34:51 by joaomigu          #+#    #+#             */
/*   Updated: 2024/01/27 17:47:58 by joaomigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int array[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &array[i], 1);
		i++;
	}
}

void	comboprint(int n, int array[])
{
	int	comma;
	int	whitespace;
	int	i;
	int	j;

	i = 0;
	j = 0;
	comma = ',';
	whitespace = ' ';
	while (i < n)
	{
		if (array[j] == array[0] + j)
		{
			j++;
		}
		i++;
	}
	if (!(j == n && array[n - 1] == '9'))
	{
		write(1, &comma, 1);
		write(1, &whitespace, 1);
	}
}

void	rec_comb(int n, int currindex, int currvalue, int array[])
{
	int	i;

	if (n == currindex)
	{
		ft_putchar(array, n);
		comboprint(n, array);
		return ;
	}
	i = currvalue;
	while (i <= 9)
	{
		array[currindex] = '0' + currvalue;
		rec_comb(n, currindex + 1, i + 1, array);
		i++;
		currvalue++;
	}
}
int main()
{
   
ft_print_reverse_alphabet();
    return 0;
}
