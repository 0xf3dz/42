/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:21:09 by fscandiz          #+#    #+#             */
/*   Updated: 2024/02/23 16:19:03 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main() {
    char dest[50];
    char dest2[50];
    const char src[] = "Hello, world!";

    // Using memcpy
    memcpy(dest, src, strlen(src) + 1);
    printf("dest after memcpy: %s\n", dest);

    // Using ft_memcpy
    ft_memcpy(dest2, src, strlen(src) + 1);
    printf("dest2 after ft_memcpy: %s\n", dest2);

    return 0;
}*/
