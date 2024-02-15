/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:36:25 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/11 20:48:42 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_list_clear(t_dict **begin_with)
{
	t_dict	*ptr;
	t_dict	*liste;

	liste = *begin_with;
	if (liste)
		while (liste)
		{
			ptr = liste->next;
			free(liste->literal);
			free(liste);
			liste = ptr;
		}
}
