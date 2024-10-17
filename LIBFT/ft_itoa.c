/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:07:46 by fscandiz          #+#    #+#             */
/*   Updated: 2024/03/05 12:52:56 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		length++;
		number = -number;
	}
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	unsigned int	length;
	unsigned int	num;
	char			*str;

	num = n;
	length = ft_number_size(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	str[length] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	while (num != 0)
	{
		length--;
		str[length] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    int num = 12345;
    char *str_num = ft_itoa(num);
    if (str_num != NULL)
    {
        printf("Number: %d\n", num);
        printf("String: %s\n", str_num);
        free(str_num); // Don't forget to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}*/
