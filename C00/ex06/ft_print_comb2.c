/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomigu <joaomigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:19:26 by joaomigu          #+#    #+#             */
/*   Updated: 2024/01/27 17:46:05 by joaomigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putseparator(char comma, char whitespace)
{
	write(1, &comma, 1);
	write(1, &whitespace, 1);
}

void	ft_putchar(int i, int j, int k, int l)
{
	char	whitespace;

	whitespace = ' ';
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &whitespace, 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (!(i == '9' && j == '8' && k == '9' && l == '9'))
	{
		ft_putseparator(',', ' ');
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(48 + i / 10, 48 + i % 10, 48 + j / 10, 48 + j % 10);
			j++;
		}
		i++;
	}
}
int main()
{
   
ft_print_comb2();
    return 0;
}
