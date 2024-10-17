/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:48:11 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/24 18:24:36 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
#include<stdio.h>

int	main(void)
{
	int	base;
	int	exponent;

	scanf("%d", &base);
	scanf("%d", &exponent);

	int	result = ft_iterative_power(base, exponent);
	printf("%d\n", result);
	return (0);
}
*/
