/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:46:25 by psimoes           #+#    #+#             */
/*   Updated: 2024/02/11 20:46:17 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	check_suff(int j, t_dict *begin_list)
{
	while (begin_list->next != 0 && (begin_list->suf == 0
			|| j != begin_list->nb))
		begin_list = begin_list->next;
	if (begin_list->next == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int	check_nb(int nb, t_dict *begin_list)
{
	while (begin_list->next != 0 && (begin_list->suf == 1
			|| nb != begin_list->nb))
		begin_list = begin_list->next;
	if (begin_list->next == 0)
		return (0);
	return (1);
}

int	check_length(char *nbr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (nbr[j] == '0')
		j++;
	while (nbr[i + j])
	{
		i++;
	}
	return (i);
}

void	check_and(int nb, int i, char *nbr)
{
	int	j;

	j = 0;
	if (nb != 0)
	{
		while (nbr[j] == '0' && j < i)
			j++;
		if ((i - j) > 2 && (nb % 100 != 0) && check_length(nbr) > 2 && (nb
				/ 100 >= 1 || i == check_length(nbr)))
			ft_putstr("and ");
	}
}
