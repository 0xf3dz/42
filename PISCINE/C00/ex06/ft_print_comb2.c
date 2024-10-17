/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:12:15 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/15 14:51:33 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_helper(char c, unsigned int n)
{
	char	result;

	result = 0;
	if (n == 0)
		result = c / 10 + '0';
	else
		result = c % 10 + '0';
	return (result);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(ft_helper(a, 0));
			ft_putchar(ft_helper(a, 1));
			ft_putchar(' ');
			ft_putchar(ft_helper(b, 0));
			ft_putchar(ft_helper(b, 1));
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
