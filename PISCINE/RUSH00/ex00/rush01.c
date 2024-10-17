/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-moel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 08:16:47 by tle-moel          #+#    #+#             */
/*   Updated: 2024/01/14 12:57:59 by tle-moel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_lines(int x, int y, int i, int j)
{
	if ((j == 0 && i == 0) || (j == (y - 1) && (i == (x - 1))))
	{
		ft_putchar('/');
	}
	else if (((j == 0 && i == (x - 1))) || ((j == (y - 1)) && (i == 0)))
	{
		ft_putchar(92);
	}
	else if ((i == 0 || i == (x - 1)) || (j == 0) || j == (y - 1))
	{
		ft_putchar('*');
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
