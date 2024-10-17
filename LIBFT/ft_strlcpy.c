/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:12:27 by fscandiz          #+#    #+#             */
/*   Updated: 2024/02/24 16:31:12 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*
#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main(void)
{
    char dest[20];
    const char *src = "Hello, world!";
    size_t destsize = sizeof(dest);
    size_t expected;
    size_t result;

    expected = strlcpy(dest, src, destsize);
    printf("strlcpy: Expected size: %zu, Destination: %s\n", expected, dest);

    char dest2[20];
    result = ft_strlcpy(dest2, src, destsize);
    printf("ft_strlcpy: Result: %zu, Destination: %s\n", result, dest2);

    return (0);
}*/
