/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 08:41:05 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/22 16:04:43 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[50];
	char	dest[50];

	ft_strncpy(src, "hello world", 50);
	ft_strncpy(dest, src, 5);

	printf("Original: %s\n", src);
	printf("Copied: %s\n", dest);
	return (0);
}
*/
