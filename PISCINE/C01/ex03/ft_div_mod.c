/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:59:06 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/18 08:56:59 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 15;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d / %d = %d\n", a, b, div);
	printf("Remainder: %d %% %d = %d\n", a, b, mod);
	return (0);
}
*/
