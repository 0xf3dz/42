/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:18:31 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/24 18:22:40 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include<stdio.h>

int	main(void)
{
	int	nb;
	int	power;
	
	scanf("%d", &nb);
	scanf("%d", &power);

	int result = ft_recursive_power(nb, power);
	printf("%d\n", result);
	return 0;
}
*/
