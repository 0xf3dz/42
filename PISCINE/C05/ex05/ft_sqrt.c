/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:27:40 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/27 16:24:23 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recur(int nb, int i)
{
	if (i > 46340)
		return (0);
	if (i * i == nb)
		return (i);
	if (i * i > nb)
		return (0);
	return (ft_recur(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_recur(nb, 0));
}
/*
#include<stdio.h>

int	main(void)
{
	int	a;

	scanf("%d", &a);
	int result = ft_sqrt(a);
	printf("%d\n", result);
}
*/
