/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:49:56 by fscandiz          #+#    #+#             */
/*   Updated: 2024/02/23 16:03:43 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char str2[50];

    // Using bzero
    bzero(str, sizeof(str));
    printf("str after bzero: %s\n", str);

    // Using ft_bzero
    ft_bzero(str2, sizeof(str2));
    printf("str2 after ft_bzero: %s\n", str2);

    return 0;
}*/
