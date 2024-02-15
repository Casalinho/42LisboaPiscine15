/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorgado <gmorgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 05:52:50 by gmorgado          #+#    #+#             */
/*   Updated: 2024/02/14 23:45:25 by gmorgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#define TAMANHO_TABULEIRO 10 // 10x10

int		g_tabuleiro[TAMANHO_TABULEIRO];

int		posicao_segura(int coluna, int linha);
int		colocar_rainha(int coluna);
void	imprimir_solucao(void);
int		ft_ten_queens_puzzle(void);

int	posicao_segura(int coluna, int linha)
{
	int	i;

	i = 0;
	while (i < coluna)
	{
		if (g_tabuleiro[i] == linha - (coluna - i) || g_tabuleiro[i] == linha
			+ (coluna - i) || g_tabuleiro[i] == linha)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	colocar_rainha(int coluna)
{
	int	linha;
	int	total_solucoes;

	linha = 0;
	total_solucoes = 0;
	if (coluna == TAMANHO_TABULEIRO)
	{
		imprimir_solucao();
		return (1);
	}
	while (linha < TAMANHO_TABULEIRO)
	{
		if (posicao_segura(coluna, linha))
		{
			g_tabuleiro[coluna] = linha;
			total_solucoes += colocar_rainha(coluna + 1);
		}
		linha++;
	}
	return (total_solucoes);
}

void	imprimir_solucao(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < TAMANHO_TABULEIRO)
	{
		c = g_tabuleiro[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "$\n", 2);
}

int	ft_ten_queens_puzzle(void)
{
	return (colocar_rainha(0));
}

int	main(void)
{
	int	total_solucoes;

	printf("Possibilidades de posicionar as Dez Damas:\n");
	total_solucoes = ft_ten_queens_puzzle();
	printf("Total de solucoes encontradas: %d\n", total_solucoes);
	return (0);
}
