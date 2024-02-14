/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 06:24:50 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/12 06:46:51 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = argc -1;;
	while (a > 0)
	{
		b = 0;
		while (argv[a][b])
		{
			write (1, &argv[a][b], 1);
			b++;
		}
		write (1, "\n", 1);
		a--;
	}
	return (0);
}
