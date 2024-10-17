/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:01:52 by fscandiz          #+#    #+#             */
/*   Updated: 2024/02/23 16:06:25 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t n);

int main() {
    char dest[50] = "Destination";
    char dest2[50] = "Destination";
    const char src[] = "Source";

    // Using memmove
    memmove(dest, src, strlen(src) + 1);
    printf("dest after memmove: %s\n", dest);

    // Using ft_memmove
    ft_memmove(dest2, src, strlen(src) + 1);
    printf("dest2 after ft_memmove: %s\n", dest2);

    return 0;
}*/
