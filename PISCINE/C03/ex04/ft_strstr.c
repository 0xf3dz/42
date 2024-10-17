/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:45:42 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/23 10:46:33 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] != '\0' && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>

int	main(void)
{
	char	str[] = "Hello World!";
	char	to_find[] = "Wo";

	char *result_ft = ft_strstr(str, to_find);
	if (result_ft)
	{
		printf("Substring found: %s", result_ft);
	}
	else
	{
		printf("Substring not found.\n");
	}
	printf("\n");
	char *result_real = strstr(str, to_find);
	if (result_real)
	{
		printf("Substring found: %s", result_real);
	}
	else
	{
		printf("Substring not found. \n");
	}

	return (0);
}
*/
