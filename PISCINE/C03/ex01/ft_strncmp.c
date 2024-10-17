/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:49:39 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/23 11:03:09 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (s1[i] != s2[i] || s2[i] == '\0')
		{
			return ((int)(unsigned char)s1[i] - (int)(unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>

int	main(void)
{
	char *s1 = "hello";
	char *s2 = "helnivhsbavilh";
	unsigned int n = 5;

	int result_ft = ft_strncmp(s1, s2, n);
	printf("ft_strncmp result: %d\n", result_ft);

	int result_actual = strncmp(s1, s2, n);
	printf("strncmp result: %d\n", result_actual);
}
*/
