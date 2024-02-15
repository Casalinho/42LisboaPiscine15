/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commons.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:21:50 by psimoes           #+#    #+#             */
/*   Updated: 2024/02/11 21:09:51 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_whitespace(char *str)
{
	if ((*str == 32 || (*str >= 9 && *str <= 13)))
		return (1);
	else
		return (0);
}

int	check_sign(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (is_whitespace(str) == 1)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	return (sign);
}
unsigned int	get_max_length(char *dict_path)
{
	unsigned int	dict_file;
	unsigned int	max_line_length;
	unsigned int	current_line_len;
	unsigned char	buffer[1];

	dict_file = open(dict_path, O_RDONLY);
	current_line_len = 0;
	while (read(dict_file, buffer, 1) != 0)
	{
		if (buffer[0] == '\n')
		{
			if (current_line_len > max_line_length)
			{
				max_line_length = current_line_len;
			}
			current_line_len = 0;
		}
		current_line_len++;
		printf("%d\n", max_line_length, 1);
	}
	close(dict_file);
	printf("%d\n", max_line_length, 1);
}
