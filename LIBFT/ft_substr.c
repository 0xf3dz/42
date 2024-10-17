/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:27:40 by fscandiz          #+#    #+#             */
/*   Updated: 2024/03/05 12:28:47 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	size_t		i;
	size_t		j;
	char		*str;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > (s_len - start))
		len = s_len - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

/*
#include "libft.h"
#include <stdio.h>

int main(void) {
    char *s = "Hello, world!";
    unsigned int start = 7;
    size_t len = 3;

    char *substring = ft_substr(s, start, len);
    if (substring != NULL) {
        printf("Substring: %s\n", substring);
        free(substring); // Free allocated memory
    } else {
        printf("Failed to extract substring.\n");
    }

    return 0;
}*/
