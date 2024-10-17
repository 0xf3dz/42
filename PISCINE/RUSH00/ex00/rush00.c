/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-moel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 07:21:17 by tle-moel          #+#    #+#             */
/*   Updated: 2024/01/14 12:56:03 by tle-moel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_lines(int x, int y, int i, int j)
{
	if ((j == 0 || j == (y - 1)) && (i == 0 || i == (x - 1)))
	{
		ft_putchar('o');
	}
	else if ((j == 0 || j == (y - 1)))
	{
		ft_putchar('-');
	}
	else if ((i == 0 || i == (x - 1)))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 1 || y < 1)
	{
		return ;
	}
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ft_print_lines(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
