/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:04:34 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/24 18:27:02 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb;
	result = 1;
	if (nb < 0)
		return (0);
	while (i >= 1)
	{
		result *= i;
		i--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	printf("Enter number: ");
	scanf("%d", &nb);

	long fact = ft_iterative_factorial(nb);
	if (fact != -1)
		printf("Factorial of %d is %ld\n", nb, fact);
	return 0;
}
*/
