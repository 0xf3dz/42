/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:02:05 by fscandiz          #+#    #+#             */
/*   Updated: 2024/03/01 13:16:50 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}

/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char const *s1 = "   Hello, world!   ";
    char const *set = " ";

    char *trimmed = ft_strtrim(s1, set);

    if (trimmed != NULL)
    {
        printf("Original string: \"%s\"\n", s1);
        printf("Trimmed string: \"%s\"\n", trimmed);
        free(trimmed); // Don't forget to free the allocated memory
    }
    else
    {
        printf("Error: Unable to trim the string.\n");
    }

    return 0;
}*/
