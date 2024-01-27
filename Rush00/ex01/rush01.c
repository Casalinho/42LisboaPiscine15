/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-c <malves-c@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:25:03 by malves-c          #+#    #+#             */
/*   Updated: 2024/01/27 17:09:30 by malves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, int y, int a, int l)
{
	if (a == 0)
	{
		if (l == 0)
			ft_putchar(47);
		else if (l == x - 1)
			ft_putchar(92);
		else
			ft_putchar(42);
	}
	else if (a == y - 1)
	{
		if (l == 0)
			ft_putchar(92);
		else if (l == x - 1)
			ft_putchar(47);
		else
			ft_putchar(42);
	}
	else
	{
		if (l == 0 || l == x - 1)
			ft_putchar(42);
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	a;
	int	l;

	a = 0;
	l = 0;
	while (a < y)
	{
		while (l < x)
		{
			ft_print(x, y, a, l);
			l++;
		}
		ft_putchar('\n');
		l = 0;
		a++;
	}
}
