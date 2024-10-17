/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:22:56 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/18 09:53:53 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
		i++;
	{
		j = 0;
		while (j < size - i - 1)
			j++;
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
}
/*
int	main(void)
{
	int	myarray[6];
	int	size;
	int	i;

	myarray[6] = {6, 4, 3, 1, 2, 5};
	size = sizeof(myarray) / sizeof(myarray[0]);
	ft_sort_int_tab(myarray, size);
	i = 0;
	while (i < size)
		i++;
	{
		printf("%d ", myarray[i]);
	}
	printf("\n");
	return (0);
}
*/
