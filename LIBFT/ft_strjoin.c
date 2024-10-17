/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:39:08 by fscandiz          #+#    #+#             */
/*   Updated: 2024/03/01 13:01:35 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len_s1;
	size_t	len_s2;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total_len = len_s1 + len_s2;
	result = (char *)malloc(total_len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len_s1 + 1);
	ft_strlcat(result, s2, total_len + 1);
	return (result);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char const *s1 = "Hello, ";
    char const *s2 = "world!";
    char *joined_str;

    joined_str = ft_strjoin(s1, s2);
    if (joined_str)
    {
        printf("Joined string: %s\n", joined_str);
        free(joined_str);
    }
    else
    {
        printf("Failed to join strings\n");
    }

    return 0;
}*/
