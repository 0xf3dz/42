/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:04:52 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/29 14:48:45 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	while (i++ < size)
		len += ft_strlen(strs[i - 1]);
	len += (size - 1) * ft_strlen(sep);
	result = malloc(len + 1);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (++i < size)
			ft_strcat(result, sep);
	}
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	char *strings[] = {"fact:", "dolphins", "get", "high", "on", "pufferfish"};
	char *sep = "\n";
	char *cat = ft_strjoin(6, strings, sep);
	
	if (cat != NULL)
	{
		printf("%s\n", cat);
		free(cat);
	}
	else
		printf("memallo failure. \n");
	return (0);
}*/
