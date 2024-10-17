/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:58:32 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/27 16:28:37 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_queen_is_safe(int table[10], int x, int y)
{
	int	i;

	i = -1;
	while (++i < x)
		if (y == table[i] || i + table[i] == x + y || i - table[i] == x - y)
			return (0);
	return (1);
}

void	ft_print_or_recursive(int table[10], int pos)
{
	int	i;
	int	i2;

	if (pos == 10)
	{
		i2 = -1;
		while (++i2 < 10)
			ft_putchar(table[i2] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (ft_queen_is_safe(table, pos, i))
			{
				table[pos] = i;
				ft_print_or_recursive(table, pos + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	table[10];
	int	i;

	i = -1;
	while (++i < 10)
		table[i] = -1;
	ft_print_or_recursive(table, 0);
	return (0);
}
/*
#include <stdio.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}
*/
