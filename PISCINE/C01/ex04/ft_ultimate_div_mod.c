/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:17:51 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/18 08:57:54 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("Division: %d\n", a);
	printf("Remainder: %d\n", b);
	return (0);
}
*/
