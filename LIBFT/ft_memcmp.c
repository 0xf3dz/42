/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:36:31 by fscandiz          #+#    #+#             */
/*   Updated: 2024/02/23 16:19:52 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p2 = s2;
	p1 = s1;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main() {
    const char *s1 = "Hello";
    const char *s2 = "Helo";
    size_t n = 5; // Number of bytes to compare

    // Using memcmp
    int result_memcmp = memcmp(s1, s2, n);
    if (result_memcmp == 0) {
        printf("Using memcmp: Memory blocks are equal\n");
    } else if (result_memcmp < 0) {
        printf("Using memcmp: Memory block 1 is less than memory block 2\n");
    } else {
        printf("Using memcmp: Memory block 1 is greater than memory block 2\n");
    }

    // Using ft_memcmp
    int result_ft_memcmp = ft_memcmp(s1, s2, n);
    if (result_ft_memcmp == 0) {
        printf("Using ft_memcmp: Memory blocks are equal\n");
    } else if (result_ft_memcmp < 0) {
        printf("Using ft_memcmp: Memory block 1 is less than memory block 2\n");
    } else {
        printf("Using ft_memcmp: Memory block 1 is 
	greater than memory block 2\n");
    }

    return 0;
}
*/
