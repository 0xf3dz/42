/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fscandiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:40:47 by fscandiz          #+#    #+#             */
/*   Updated: 2024/02/23 16:05:16 by fscandiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big != '\0' && len > 0)
	{
		i = 0;
		while (big[i] == little[i] && little[i] != '\0' && len - i > 0)
			i++;
		if (little[i] == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "world";
    size_t len = 13; // Maximum number of characters to search

    // Using strnstr
    char *result_strnstr = strnstr(haystack, needle, len);
    if (result_strnstr != NULL) {
        printf("Using strnstr: Substring '%s' found at position: %ld\n", 
	needle, result_strnstr - haystack);
    } else {
        printf("Using strnstr: Substring '%s' 
	not found in the string\n", needle);
    }

    // Using ft_strnstr
    char *result_ft_strnstr = ft_strnstr(haystack, needle, len);
    if (result_ft_strnstr != NULL) {
        printf("Using ft_strnstr: Substring '%s' found at position: %ld\n", 
	needle, result_ft_strnstr - haystack);
    } else {
        printf("Using ft_strnstr: 
	Substring '%s' not found in the string\n", needle);
    }

    return 0;
}
*/
