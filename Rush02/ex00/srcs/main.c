/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:09:38 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/11 21:09:38 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int	ft_atoi(char *str);
int	is_whitespace(char str);
unsigned long long	tr_atoi(char *str);

int	ft_strcmp(char *str1, char *str2)
{
	unsigned long long val_a;
	unsigned long long val_b;

	val_a = tr_atoi(str1);
	val_b = tr_atoi(str2);
	if (val_a < val_b)
		return (-1);
	else if (val_a == val_b)
		return (0);
	else
		return (1);
}

int	ft_str_is_alpha(char str)
{
	if ((str < 'a' || str > 'z') && (str < 'A' || str > 'Z'))
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_numeric(char str)
{
	if (str < '0' || str > '9')
	{
		return (0);
	}
	return (1);
}

int	validate_line(char *line)
{
	int number_found;
	int colon_found;
	int word_found;
	int i;

	number_found = 0;
	colon_found = 0;
	i = 0;
	while (line[i] != '\0')
	{
		while (is_whitespace(line[i]) == 1)
			i++;
		if (ft_str_is_numeric(line[i]))
		{
			if (colon_found > 0 || word_found > 0)
			{
				return (0);
				// found a number after the colon or after a word this line is invalid
			}
			else
			{
				number_found++;
			}
		}
		if (ft_str_is_alpha(line[i]))
		{
			if (colon_found == 0 || number_found == 0)
			{
				return (0);
				// found a char before the colon or before the number this line is invalid
			}
			else
			{
				word_found++;
			}
		}
		if (line[i] == ':')
		{
			colon_found++;
		}
		i++;
	}
	if (colon_found == 1 && number_found > 0 && word_found > 0)
		return (1);
	else
		return (0);
}

void	reset_buffer(char *buffer, unsigned int size)
{
	unsigned i;

	i = 0;
	while (i < size)
	{
		buffer[i] = '\0';
		i++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int	check_number(char *str)
{
	if (ft_atoi(str) >= 0)
		return (1);
	else
		return (0);
}

int	is_whitespace(char str)
{
	if ((str == 32 || (str >= 9 && str <= 13)))
		return (1);
	else
		return (0);
}
unsigned long long	tr_atoi(char *str)
{
	unsigned long long result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while (is_whitespace(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + *str - '0';
		i++;
	}
	return (result * sign);
}
int	ft_atoi(char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while (is_whitespace(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

char	**increaseCapacity(char **oldArray, int oldCapacity, int newCapacity)
{
	char **newArray;

	// Allocate memory for the new array of strings
	newArray = (char **)malloc(newCapacity * sizeof(char *));
	if (newArray == NULL)
	{
	}
	for (int i = 0; i < oldCapacity; i++)
	{
		newArray[i] = oldArray[i];
	}
	free(oldArray);
	return (newArray);
}

void	analyze_dict(char *file, unsigned int **max_string_length,
		unsigned int **max_lines)
{
	int fh;
	char read_buffer[1];
	unsigned int lines;
	unsigned int string_length;
	unsigned int max_found_string_length;

	lines = 0;
	string_length = 0;
	max_found_string_length = 0;
	fh = open(file, O_RDONLY);
	while (read(fh, read_buffer, 1) != 0)
	{
		if (read_buffer[0] == '\n')
		{
			lines++;
			if (string_length > max_found_string_length)
				max_found_string_length = string_length;
			string_length = 0;
		}
		else
		{
			string_length++;
		}
	}
	max_found_string_length++;
	close(fh);
	*max_string_length = &max_found_string_length;
	*max_lines = &lines;
}

char	**load_dict(char *file)
{
	char **arrayOfStrings;
	char *tempdata;
	unsigned int *ptr_max_string_length;
	unsigned int *ptr_max_lines;
	int fh;
	char read_buffer[1];
	int char_count;
	int line_count;
	unsigned int max_line_count;
	unsigned int max_char_count;
	int sort;
	int sortj;
	char *temp;

	analyze_dict(file, &ptr_max_string_length, &ptr_max_lines);
	// max_line_count = *ptr_max_lines;
	max_line_count = 1;
	max_char_count = *ptr_max_string_length;
	tempdata = (char *)malloc((max_char_count * sizeof(char)));
	arrayOfStrings = (char **)malloc((max_line_count * sizeof(char *)));
	// printf("Value pointed by max_string_length in load_dict: %d\n",
	//	max_char_count);
	// printf("Value pointed by max_lines in load_dict: %d\n",
	//		max_line_count);
	// capacidade inicial do array é igualada ao numero de linhas detetado previamente (ainda falta limpar linhas "sujas" portanto a capacidade inicial deverá exceder a capacidade necessária)
	// capacidade inicial do buffer inicializada com o valor maximo encontrado na verificação em analyze_dict
	reset_buffer(tempdata, max_char_count);
	fh = open(file, O_RDONLY);
	char_count = 0;
	line_count = 0;
	while (read(fh, read_buffer, 1) != 0)
	{
		if (read_buffer[0] == '\n')
		{
			char_count = 0;
			if (validate_line(tempdata) == 1)
			{
				line_count++;
				// com a versão revista de atribuir logo a capacidade para o numero de linhas encontrado em analyse_dict este passo de "re alocar" memória para aumentar a capacidade nunca deverá acontecer
				if (line_count > max_line_count)
				{
					arrayOfStrings = increaseCapacity(arrayOfStrings,
							max_line_count, line_count);
					max_line_count = line_count;
				}
				arrayOfStrings[line_count
					- 1] = (char *)malloc((ft_strlen(tempdata) + 1)
						* sizeof(char));
				ft_strcpy(arrayOfStrings[line_count - 1], tempdata);
				// printf("ArrayOfStringStorage: %s\n",
				//	arrayOfStrings[line_count
				//		- 1]);
			}
			reset_buffer(tempdata, max_char_count);
			// we need to reset the data in the tempdata cause i was getting parts of previous lines when printing
		}
		else
		{
			tempdata[char_count] = read_buffer[0];
			char_count++;
		}
	}
	arrayOfStrings[line_count] = NULL;
	close(fh);
	// sort array
	sort = 0;
	sortj = 0;
	while (sort < line_count)
	{
		sortj = sort;
		while (sortj > 1 && ft_strcmp(arrayOfStrings[sortj],
				arrayOfStrings[sortj - 1]) > 0)
		{
			temp = arrayOfStrings[sortj - 1];
			arrayOfStrings[sortj - 1] = arrayOfStrings[sortj];
			arrayOfStrings[sortj] = temp;
			sortj--;
		}
		sort++;
	}
	return (arrayOfStrings);
}
int	main(int argc, char const *argv[])
{
	char *dictionary_arg;
	char *number_arg;
	char **dictionary;

	/* if (argc < 2 || argc > 3)
	{
		return (1);
	}
	if (argc == 2)
	{
		number_arg = argv[1];
		dictionary_arg = "./numbers.dict";
	}
	else
	{
		number_arg = argv[2];
		dictionary_arg = argv[1];
	} */
	//********Test Cases ************
	number_arg = "	----+--+1234ab567";
	dictionary_arg = "../dicts/numbers.dict";
	if (check_number(number_arg) == 1)
	{
		dictionary = load_dict(dictionary_arg);
		for (int i = 0; dictionary[i] != NULL; i++)
		{
			printf("%s\n", dictionary[i]);
		}
	}
	else
	{
	}
	return (0);
}
