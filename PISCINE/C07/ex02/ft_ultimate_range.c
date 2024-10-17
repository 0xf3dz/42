/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:10:40 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/29 14:47:27 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	array_size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array_size = max - min;
	*range = malloc(sizeof(int) * array_size);
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < array_size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (array_size);
}
/*
#include <stdio.h>

int	main()
{
	int	min = 2;
	int	max = 20;
	int	size;

	int *array;
       
	int result = ft_ultimate_range(&array, min, max);

	if (result >= 0)
	{
		size = result;
		printf("Size of the array: %d\n", size);
		printf("Array elements: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        free(array);
    } else {
        printf("Empty array\n");
    }

    return 0;
}*/
