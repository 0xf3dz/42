/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:46:52 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/18 08:56:30 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 10;
	printf("Before swapping: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After swapping: a = %d, b = %d\n", a, b);
	return (0);
}
*/
