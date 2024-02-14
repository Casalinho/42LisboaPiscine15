/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 06:25:58 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/14 19:24:26 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;

	(void)argc;
	a = 0;
	while (argv[0][a] != '\0')
	{
		write(1, &argv[0][a], 1);
		a++;
	}
	write(1, "\n", 1);
	return (0);
}
