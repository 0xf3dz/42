/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:53:04 by fscandiz          #+#    #+#             */
/*   Updated: 2024/02/23 16:10:58 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	while (dst[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int main(void)
{
    char dest[20] = "Hello, ";
    const char *src = "world!";
    size_t destsize = sizeof(dest);
    size_t expected;
    size_t result;

    expected = strlcat(dest, src, destsize);
    printf("strlcat: Expected size: %zu, Result: %zu, Destination: %s\n", 
    expected, strlen(dest), dest);

    char dest2[20] = "Hello, ";
    result = ft_strlcat(dest2, src, destsize);
    printf("ft_strlcat: Result: %zu, Destination: %s\n", strlen(dest2), dest2);

    return (0);
}*/
