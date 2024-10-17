/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:10:06 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/29 14:46:14 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*str;

	if (min >= max)
		return (NULL);
	str = malloc(sizeof(int) * (max - min));
	if (!str)
		return (NULL);
	i = 0;
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	int	*str;
	int	size;
	int	min = 11;
	int	max = 1000;
	int	i = 0;

	str = ft_range(min, max);
	if (str)
	{
		size = max - min;
		while (i < size)
		{
			printf("%d ", str[i]);
			i++;
		}
		free(str);
		printf("\n");
	}
	return (0);
}*/
