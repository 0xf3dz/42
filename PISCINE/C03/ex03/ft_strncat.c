/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:12:08 by fscandiz          #+#    #+#             */
/*   Updated: 2024/01/22 20:14:53 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		j;
	unsigned int		i;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <string.h>

int	main(void)
{
	char	dest[11] = "hello";
	char	src[] = "world";

	printf("%s\n", ft_strncat(dest, src, 2));
	strcpy(dest, "hello"); // reset dest
	printf("%s\n", strncat(dest, src, 2));

}
*/
