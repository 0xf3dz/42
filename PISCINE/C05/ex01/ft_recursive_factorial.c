/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:47:05 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/24 18:25:28 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include<stdio.h>

int	main(void)
{
	int	nb;
	printf("Enter nb: ");
	scanf("%d", &nb);

	int	fact = ft_recursive_factorial(nb);
	if (fact != -1)
		printf("%d\n", fact);
	return 0;
}
*/
